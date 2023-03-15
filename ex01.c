#include <stdio.h>
void main()
{
	int age=5;
	//예약어 안됨,  영문소문자 넣어야함,($랑_가능)	
	short a=32768; //2byte
	//오버플로우 발생 -32768~32767의 범위를 벗어남 
	unsigned short b = 32768; //2byte
	//unsigned : -32768~32767의 범위에서 음수값까지 양수로 바꿔줌 0~65535
	//java에는 없는기능
	//unsigned byte,short,int,long
	//java에서 long은 8byte였지만 C에서 long은 4byte이다
	
	int c = -1000;
	unsigned int d = 1000; 
	long e = -300;
	unsigned long f = 300;
	 
	printf("단정도 정수 : %d\n",a) ;
	printf("부호가 없는 단정도 정수 : %d\n",b);
	printf("일반 정수 : %d\n",c);
	printf("부호가 없는 일반 정수 : %d\n",d);
	printf("배정도 정수 : %d\n",e);
	printf("부호가 없는 배정도 정수 : %d\n",f);
	printf("당신의 나이는 %d입니다.",age);
	//printf는 자바랑 똑같이 작용 
} //자바처럼 자동으로 garbage colletion(메모리정리)가 이뤄지지않음 
