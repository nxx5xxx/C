#include <stdio.h>
void main(){
	//진법 변환
	int a = 0b110101;		//2진수(Binary) 
	int b = 0572;			//8진수(Octal) 
	int c = 0x3e6;			//16진수(heXimal) 
	int d = 365; 			//10진수(Decimal)
	printf("2진수 0b110101 -> %d\n", a);
	printf("8진수 0572 -> %d\n", b);
	printf("16진수 0x3e6 -> %d\n", c);
	printf("10진수 365 -> %d\n", d);
	
	printf("10진수 365를 8진수로 출력 -> %#o\n", d); //자바에서는 %o였지만 c에선 %#o 
	printf("10진수 365를 16진수로 출력 -> %#x\n", d); //자바 %x  C에서 %#x 
	}
