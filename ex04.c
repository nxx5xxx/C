#include <stdio.h>
void main(){
	//연산자 
	int a=50;
	int b=90;
	int c=80;
	int d=3;
	
	//사칙연산 
	printf("a+b=%d\n",a+b);
	printf("a-b=%d\n",a-b);
	printf("a*b=%d\n",a*b); 
	printf("a/d=%f\n",(float)(a/d));
	printf("a/d=%f\n",(float)a/d);
	//(a/d)안에 먼저계산하여 정수로 나온 후 float으로 바뀌므로 (a/d)는 맞지않다 
	printf("a%%b=%d\n",a%3);
	//c에서는 %를 출력하기위해서 서식지정자 %%로 써야 %로 출력을 할수가 있다 
	
	//증감식
	printf("후위 증가a++ : %d \n", a++);//50출력후 1을 더함 51 
	printf("전위 증가++b : %d \n", ++b);//1더한후 91출력 
	
	a=50, b=50;
	//대입연산자(=,+=,-=,*=,/=,%=)
	a+=2; b-=2;
	printf("a+=2 -> a값에서 2를 더하여 대입한 결과 : %d\n",a); //a=a+2
	printf("b-=2 -> b값에서 b를 빼 대입한 결과 : %d\n",b); //b=b-2
	a*=2; b/=2; 
	printf("a*=2 -> a값에서 2를 곱하여 대입한 결과 : %d\n",a);//a=a*2
	printf("b/=2 -> b값에서 2를 나누어 대입한 결과 : %d\n",b);//b=b/2
}
