# 开发环境搭建

## 1. Keil MDK-ARM 5

1. 从 Keil 官网下载 MDK-ARM 并安装
2. 安装器件支持包（Pack），例如 `Keil.STM32F1xx_DFP`
3. 安装 ST-Link 驱动（`ST-LINK_USB_V2` 或随 STM32CubeProgrammer 安装）

> 首次打开例程时，Keil 会提示缺少 Pack，按提示在线安装即可。

## 2. STM32CubeMX

用于图形化配置时钟树、引脚复用和外设，自动生成 HAL 初始化代码。

- 需要 Java 环境（CubeMX 自带，无需单独安装）
- 下载固件包 `STM32Cube MCU Package for STM32F1` 后才能生成代码

## 3. STM32CubeProgrammer

独立烧录工具，也可以在 Keil 中直接使用 ST-Link 烧录。

## 4. 串口工具

推荐 XCOM（正点原子）或 SSCOM。参数一般为：

```
波特率  115200
数据位  8
停止位  1
校验位  无
```

## 5. Git 配置

首次使用需配置身份（换成你自己的 GitHub 邮箱，否则提交不会关联到账号）：

```bash
git config --global user.name "你的名字"
git config --global user.email "你的邮箱@example.com"
```
