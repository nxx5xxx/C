#include <stdio.h>
void main(){
	//���� ��ȯ
	int a = 0b110101;		//2����(Binary) 
	int b = 0572;			//8����(Octal) 
	int c = 0x3e6;			//16����(heXimal) 
	int d = 365; 			//10����(Decimal)
	printf("2���� 0b110101 -> %d\n", a);
	printf("8���� 0572 -> %d\n", b);
	printf("16���� 0x3e6 -> %d\n", c);
	printf("10���� 365 -> %d\n", d);
	
	printf("10���� 365�� 8������ ��� -> %#o\n", d); //�ڹٿ����� %o������ c���� %#o 
	printf("10���� 365�� 16������ ��� -> %#x\n", d); //�ڹ� %x  C���� %#x 
	}
