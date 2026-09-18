# STM32_LEARN

STM32 学习记录仓库 —— 存放学习过程中的外设例程、笔记和踩坑记录。

## 目录结构

```
STM32_LEARN/
├── examples/               # 各外设的练手例程，按学习顺序编号
│   ├── 01_gpio_led/        # GPIO 输出：点灯
│   ├── 02_exti_button/     # 外部中断：按键
│   ├── 03_usart_printf/    # 串口通信与 printf 重定向
│   ├── 04_tim_delay/       # 定时器：精确延时
│   ├── 05_pwm_breathing/   # 定时器 PWM：呼吸灯
│   ├── 06_adc_voltage/     # ADC：电压采集
│   ├── 07_dma_mem2mem/     # DMA：数据搬运
│   ├── 08_i2c_oled/        # I2C：驱动 OLED
│   ├── 09_spi_flash/       # SPI：读写 Flash
│   └── 10_rtc_clock/       # RTC：实时时钟
├── docs/                   # 学习笔记与文档
│   └── setup.md            # 开发环境搭建
└── tools/                  # 辅助脚本（烧录、格式化、转换等）
```

## 硬件环境

| 项目 | 说明 |
| --- | --- |
| 开发板 | 待补充 |
| 主控 | STM32F103C8T6（待确认） |
| 调试器 | ST-Link V2 |
| 主频 | 72 MHz |

## 软件环境

参见 [docs/setup.md](docs/setup.md)。常用工具链：

- **Keil MDK-ARM 5** —— 主力 IDE，工程文件为 `*.uvprojx`
- **STM32CubeMX** —— 生成初始化代码（HAL 库）
- **STM32CubeProgrammer** —— 烧录与调试
- **串口助手** —— 查看串口输出，如 XCOM / 串口调试助手

## 例程说明

每个例程目录下应包含：

- `README.md` —— 该例程的功能、接线方式、实验现象
- 完整的工程源码（**不包含**编译产物，见 `.gitignore`）

### 学习路线

```
GPIO → EXTI → USART → TIM → PWM → ADC → DMA → I2C → SPI → RTC
  ↓      ↓       ↓      ↓     ↓      ↓     ↓      ↓      ↓     ↓
点灯   按键   串口调试  延时  呼吸灯  采集  搬运   OLED  Flash  时钟
```

## 提交规范

```
<类型>: <简短描述>

feat     新增例程或功能
docs     仅文档改动
fix      修复问题
refactor 重构，不改变行为
chore    杂项（配置、gitignore 等）
```

示例：`feat: 新增 05_pwm_breathing 呼吸灯例程`

## 说明

本仓库为个人学习记录，代码以“跑通并能理解”为目标，未必符合生产级规范。
