#include "stm32f10x.h"
#include "delay.h"

int main(void)
{
	//开始GPIOC时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);

	//初始化GPIOC的第13号引脚为开漏输出模式
	GPIO_InitTypeDef GPIO_InitStructure={0};//调用GPIO_InitTypeDef结构体初始化为0
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;//选择GPIOC的第13号引脚
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD;//设置为开漏输出模式
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;//设置输出速度为2MHz

	//调用GPIO_Init函数初始化GPIOC的第13号引脚
	GPIO_Init(GPIOC, &GPIO_InitStructure);

	while(1)
	{
		Delay(500);//延时500ms
		GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_SET);//将GPIOC的第13号引脚悬空
		Delay(500);//延时500ms
		GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_RESET);//将GPIOC的第13号引脚拉低
	}
}
