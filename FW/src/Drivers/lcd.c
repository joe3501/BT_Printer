#include "hw_platform.h"
#ifdef LCD_VER
#include "Lcd.h"
#include "TimeBase.h"


#define RST_LOW()		do{\
	GPIOA->BRR = GPIO_Pin_8;\
	}while(0)

#define RST_HIGH()		do{\
	GPIOA->BSRR = GPIO_Pin_8;\
	}while(0)

#define CS_LOW()		do{\
	GPIOC->BRR = GPIO_Pin_9;\
	}while(0)

#define CS_HIGH()		do{\
	GPIOC->BSRR = GPIO_Pin_9;\
	}while(0)

#define A0_LOW()		do{\
	GPIOC->BRR = GPIO_Pin_8;\
	}while(0)

#define A0_HIGH()		do{\
	GPIOC->BSRR = GPIO_Pin_8;\
	}while(0)

#define SCK_LOW()		do{\
	GPIOC->BRR = GPIO_Pin_7;\
	}while(0)

#define SCK_HIGH()		do{\
	GPIOC->BSRR = GPIO_Pin_7;\
	}while(0)

#define SDA_LOW()		do{\
	GPIOC->BRR = GPIO_Pin_6;\
	}while(0)

#define SDA_HIGH()		do{\
	GPIOC->BSRR = GPIO_Pin_6;\
	}while(0)

//初始化LCD的IO
static void Lcd_port_init(void)
{
	GPIO_InitTypeDef							GPIO_InitStructure;
	//LED_BLUE	-- PB.12
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA| RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC, ENABLE);

	//LCD_DATA -- PC.6  LCD_SCK -- PC.7  LCD_C/D -- PC.8  LCD_CS -- PC.9
	GPIO_InitStructure.GPIO_Pin				= GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Mode			= GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed			= GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);

	//LCD_Reset -- PA.8
	GPIO_InitStructure.GPIO_Pin				= GPIO_Pin_8;
	GPIO_InitStructure.GPIO_Mode			= GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed			= GPIO_Speed_10MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	//LCD_BACKLight -- PB.12
	GPIO_InitStructure.GPIO_Pin				= GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Mode			= GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed			= GPIO_Speed_10MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
}

//量测V0对地电压为6.4~6.5V
 /*第二套对比度方案
     write(0x23,0);
    write(0x81,0);  //Electronic Volume Mode Set
     write(0x13,0);  //Electronic Volume Register Set (改变此值可调节对比度，调节范围0x00~0x3F）
 */
void write(unsigned char data,unsigned char A0)
{
	int i;
	CS_LOW();
	if (A0)
	{
		A0_HIGH();
	}
	else
	{
		A0_LOW();
	}
	for (i = 0; i < 8;i ++)
	{
		if (data&0x80)
		{
			SDA_HIGH();
		}
		else
		{
			SDA_LOW();
		}

		SCK_LOW();

		data<<=1;
		SCK_HIGH();
	}
	CS_HIGH();
}

void write_ext(unsigned char data,unsigned char A0)
{
	int i;
	CS_LOW();
	A0_HIGH();
	for (i = 0; i < 8;i ++)
	{
		if (data&0x80)
		{
			//SDA_HIGH();
			SDA_LOW();
		}
		else
		{
			SDA_HIGH();
		}

		SCK_LOW();

		data<<=1;
		SCK_HIGH();
	}
	CS_HIGH();
}


void Lcd_init(void) //write函数，第二参数0表示指令，1表示数据
{
	Lcd_port_init();
	LCD_BACKLIGHT_ON();

	RST_LOW();
	delay_us(20);  //20us
	RST_HIGH();
	delay_us(200);  //200us

	write(0xe2,0);  //Reset
	delay_us(200);   //200us

	write(0xA3,0);  //set 1/6 bias
	write(0xA0,0);  //seg0~seg131
	write(0xc8,0);  //com63~com0

	write(0xa4,0);  //display normal
	write(0x40,0);  //display start line set

	write(0xf8,0);    //booster
	write(0x00,0);    //5xVDD

	// write(0x22,0);  //set (1+Rb/Ra) 100:5.0 ; 111: 6.4
	write(0x23,0);
	// delay(20);  //2ms
	write(0x81,0);  //Electronic Volume Mode Set
	// write(0x19,0);  //Electronic Volume Register Set (改变此值可调节对比度，调节范围0x00~0x3F）
	write(0x13,0);
	// delay(10);   //1ms

	write(0x2c,0);  //power control set
	delay_us(100);   //100us
	write(0x2e,0);  //power control set
	delay_us(100);   //100us
	write(0x2F,0);  //power control set
	delay_us(100);   //100us

	//   delay(50);   //50us
	write(0xaf,0); //Dispaly On
	delay_us(50);   //50us

	Lcd_clear(1);
}
#if 0
unsigned char const AA[]= {
	/*--  调入了一幅图像：D:\My Documents\程序调试\zimo\128x64_da.bmp  --*/
	/*--  宽度x高度=128x64  --*/
	0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,
	0x60,0xF8,0xFE,0x06,0x00,0x00,0x80,0xFE,0xFE,0x40,0x60,0x30,0x18,0x18,0x88,0x80,
	0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x3C,0x3E,0x26,0x20,0xA0,0xA0,0x20,0x20,
	0x20,0xA0,0xE0,0x70,0x30,0x20,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x18,0xF8,
	0xF8,0x0C,0x04,0x04,0x04,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
	0xF0,0xF0,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x30,0x10,
	0x10,0x10,0x30,0xF0,0xF0,0x00,0x00,0x10,0xF0,0xF0,0x10,0x10,0x10,0x30,0xE0,0xC0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x41,0x40,
	0x40,0x4F,0x4F,0x40,0x41,0x41,0xF9,0xFF,0x47,0x44,0x44,0x44,0x44,0x44,0x67,0x67,
	0x44,0x00,0x00,0x00,0x00,0x01,0xC1,0xF0,0x3C,0x1C,0x0C,0x00,0xFF,0xFF,0x00,0x04,
	0x0C,0x18,0x70,0xE0,0xC0,0x80,0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0xC2,0xFF,
	0x3F,0x02,0x02,0x02,0x02,0x02,0xFF,0xFF,0x02,0x02,0x03,0x03,0x02,0x00,0x00,0x00,
	0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x7F,0xFF,0x80,0x00,0x00,
	0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0xC0,0xFF,
	0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x02,0x03,0x01,0x00,0x00,0x00,0x04,0x04,0x0F,0x0F,0x00,0x00,
	0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x08,0x08,0x0C,0x06,0x03,0x01,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
	0x03,0x03,0x02,0x02,0x02,0x02,0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x02,
	0x02,0x02,0x03,0x01,0x00,0x00,0x00,0x02,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,
	0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x80,
	0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x80,0xC0,0xC0,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x80,0x00,
	0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0xC0,0xC0,
	0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x80,0xC0,0xC0,0xC0,0xC0,
	0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0xFF,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0xC0,0x60,0x31,0x1F,0x0F,0x00,0xC7,0xEF,
	0x39,0x18,0x10,0x30,0x79,0xEF,0xC7,0x00,0x04,0x1C,0x38,0xF0,0xF0,0x38,0x1C,0x04,
	0x00,0xFC,0xFF,0x13,0x19,0x18,0x18,0x38,0xF0,0xE0,0x00,0x70,0x78,0x6C,0x66,0x63,
	0x61,0xFF,0xFF,0x60,0x60,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0xFF,
	0xFC,0x00,0xFC,0xFF,0x03,0x01,0x00,0x00,0x00,0x00,0x01,0x03,0xFF,0xFC,0x00,0x00,
	0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x19,0x30,0x30,0x30,
	0x30,0x60,0xE1,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0F,0x0F,
	0x0C,0x0C,0x0C,0x00,0x00,0x0E,0x0F,0x0D,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x03,0x07,
	0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,0x00,0x08,0x0E,0x07,0x03,0x03,0x07,0x0E,0x08,
	0x00,0x01,0x07,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0E,0x06,0x07,0x03,
	0x00,0x00,0x00,0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x0C,0x0E,0x07,0x03,0x00,0x00,0x00,
	0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,
	0x0C,0x06,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,
};

void DispBmp1(void)//normal
{
	int i=0;
	unsigned char cnt, cnt1;
	write(0x40,0);      // Set Display Start Line
	unsigned char AA[64*6];

	memset((void*)AA,0xFF,64*6);

	for(cnt = 0; cnt < 6; cnt ++)
	{
		write(0xb0 + cnt,0);
		write(0x10,0);
		write(0x00,0);

		for(cnt1 = 0; cnt1 < 64; cnt1 ++)
		{
			write(AA[i],1);
			i++;
		}
		//delay(100);

	}
	//delay(800);
}
#endif
//c: 0 -- balck   else: white
void Lcd_clear(unsigned char c)
{
	int i=0;
	unsigned char cnt, cnt1,tmp;
	write(0x40,0);      // Set Display Start Line

	tmp = (c==0)?0x00:0xff;

	for(cnt = 0; cnt < 6; cnt ++)
	{
		write(0xb0 + cnt,0);
		write(0x10,0);
		write(0x00,0);

		for(cnt1 = 0; cnt1 < 64; cnt1 ++)
		{
			write(tmp,1);
			i++;
		}
		//delay(100);

	}
	//delay(800);
}


#if 0
unsigned char const AA[3][64]= {
	{0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0xC0,0xC0,0xC0,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,\
	0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0C,0x0C,0x0C,0xFF,0xFF,0xFF,0x00,0x3F,0x7F,0x7F,0xCC,0xCC,0xCC,0xCC,0xCC,0x00,0xFF,0xFF,0xFF,0x18,0x18,0x7C,0xFF,0xCF,0x00,\
	0x3F,0x7F,0x7F,0xE0,0xC0,0xC0,0xF1,0x7F,0x3F,0x0C,0xC0,0xC0,0xC0,0xC0,0xE0,0x7F,0x7F,0x3F,0x00,0x1E,0x7F,0x7F,0xEC,0xCC,0xCC,0xCC,0xCC,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	/*"E:\BT_Printer\resource\logo_zheng.bmp",0*/
};

void Lcd_dispLogo(void)//normal
{
	//int i=0;
	unsigned char cnt, cnt1;
	write(0x40,0);      // Set Display Start Line
	//unsigned char AA[64*6];

	//memset((void*)AA,0xFF,64*6);

	for(cnt = 0; cnt < 6; cnt ++)
	{
		write(0xb0 + cnt,0);
		write(0x10,0);
		write(0x00,0);
		for(cnt1 = 0; cnt1 < 64; cnt1 ++)
		{
			if ((cnt < 1)||(cnt > 3))
			{
				//write(0,1);
				write_ext(0,1);
			}
			else
			{
				//write(AA[cnt-1][cnt1],1);
				write_ext(AA[cnt-1][cnt1],1);
			}
			
			//i++;
		}
		//delay(100);

	}
	//delay(800);
}
#endif

#if 1
unsigned char const AA[]= {
//E:\BT_Printer\resource\logo_zheng.bmp(0)

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0xC0,0xC0,0xC0,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,
  0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0C,0x0C,0x0C,0xFF,0xFF,0xFF,0x00,0x3F,0x7F,0x7F,0xCC,0xCC,0xCC,0xCC,0xCC,0x00,0xFF,0xFF,0xFF,0x18,0x18,0x7C,0xFF,0xCF,
  0x00,0x3F,0x7F,0x7F,0xE0,0xC0,0xC0,0xF1,0x7F,0x3F,0x0C,0xC0,0xC0,0xC0,0xC0,0xE0,0x7F,0x7F,0x3F,0x00,0x1E,0x7F,0x7F,0xEC,0xCC,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x30,0x30,0x30,0xFE,0xFE,0x00,0x80,0x80,0xFE,0xFE,0x00,0x00,0xBE,0xBE,0xB6,0xF6,0xE6,
  0x00,0xEC,0xFE,0x32,0x32,0xFE,0xEC,0x00,0x00,0xFE,0xFE,0xB6,0xB6,0xFE,0xEC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,
  0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  /*"E:\BT_Printer\resource\logo_zheng.bmp",0*/



};

void Lcd_dispLogo(void)//normal
{
	int i=0;
	unsigned char cnt, cnt1;
	write(0x40,0);      // Set Display Start Line
	//unsigned char AA[64*6];

	//memset((void*)AA,0xFF,64*6);

	for(cnt = 0; cnt < 6; cnt ++)
	{
		write(0xb0 + cnt,0);
		write(0x10,0);
		write(0x00,0);
		for(cnt1 = 0; cnt1 < 64; cnt1 ++)
		{
			//write(AA[cnt-1][cnt1],1);
			write_ext(AA[i],1);
			i++;
		}
		//delay(100);

	}
	//delay(800);
}
#endif

//显示屏的刷新
void Lcd_Refresh(void)
{
	
}

#endif