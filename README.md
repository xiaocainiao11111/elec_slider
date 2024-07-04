# 基于STM32F103CBT6的电控滑轨设计
>菜鸡毕设


## 文件夹介绍
- 0.STM32程序：使用keil开发，包含全部源码，环境配置看https://zhuanlan.zhihu.com/p/670162318

- 1.QT上位机：QT4.11.1

- 2.原理图和PCB：立创EDA标准版工程

- 3.3D模型：SOLIDWORKS 2023  

# 项目说明

- 项目使用42步进电机作为移动装置，控制程序使用稚晖君dummy中的42闭环程序，使用MT6816作为磁编码器检测角度，电机细分数为256，一圈步数为51200。
- 使用串口通讯
- 使用12V电池作为电源

>资料和说明代补充中。。。

## 参考：

https://zhuanlan.zhihu.com/p/147659820

https://github.com/unlir/XDrive

https://link.zhihu.com/?target=https%3A//github.com/peng-zhihui/Dummy-Robot

https://link.zhihu.com/?target=https%3A//github.com/xiaocainiao11111/Dummy_42_copy


# *make by xiaocainiao* 