#include "uart_handle.h"

uint8_t datalen = 0;
extern uint8_t rec_buff[100];
uint16_t rec = 0;
uint8_t Tx_flag = 0;

void Upload_cali_data()
{
    uint16_t Tx_cali_data = (uint16_t)(motor.controller->GetVelocity() * 100 + 3000);
    uint8_t Tx_data[5] = {0xAA, 0x55, 0x02, (uint8_t)(Tx_velocity_data >> 8), (uint8_t)Tx_velocity_data};
    HAL_UART_Transmit_DMA(&huart1, &Tx_data[0], 5);
}

void Rx_handle()
{
    if (rec_buff[0] == 0xAA && rec_buff[1] == 0x55)
    {
        switch (rec_buff[2])
        {
        case 0x02: // 重新校验
            encoder_calibrator_base.isTriggered = true;
            break;
        case 0x04: // 设置速度
            motor.controller->requestMode = Motor::MODE_COMMAND_VELOCITY;
            motor.controller->SetVelocitySetPoint((int32_t)((((int16_t)rec_buff[3] << 8 | rec_buff[4]) - 3000) * 512));
            break;
        case 0x05: // 设置角度
            motor.controller->requestMode = Motor::MODE_COMMAND_POSITION;
            motor.controller->SetPositionSetPoint((int32_t)((((uint16_t)rec_buff[3] << 8 | rec_buff[4]) - 5000) * 512));
            break;
        case 0x22: // 上传速度
            Tx_flag = 1;
            break;
        default:
            break;
        }
    }
}

// 空闲处理中断
void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size)
{

    if (huart == &huart1)
    {
        datalen = 100 - __HAL_DMA_GET_COUNTER(huart1.hdmarx);
        Rx_handle();
    }
}

void Upload_estposition()
{
    if (Tx_flag == 1)
    {
        uint16_t Tx_velocity_data = (uint16_t)(motor.controller->GetVelocity() * 100 + 3000);
        uint8_t Tx_data[5] = {0xAA, 0x55, 0x22, (uint8_t)(Tx_velocity_data >> 8), (uint8_t)Tx_velocity_data};
        HAL_UART_Transmit_DMA(&huart1, &Tx_data[0], 5);
    }
}
