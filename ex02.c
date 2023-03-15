#include <stdio.h>
void main(){
	//실수 (부동소수점수) : 아주 큰 수나 아주 작은 수에 적합
	//부호, 지수 , 가수 등으로 이루어짐 
	float a = 3.14159272; 
	//4byte : 지수 8비트, 가수 23비트 
	double b = 321.123456789012; 
	//8byte : 지수 11비트, 가수  
	printf("a=%f\n",a);
	printf("b=%f\n",b);
	//기본출력을 하면 소수점 6번째까지 표현됨 
	printf("a=%.9f\n",a);
	printf("b=%15.9f\n",b);
 
	long double c = a + b ; //8byte
	//float(4byte)+double(8byte)를 더하면 정상값을 출력하지못해 0으로 출력됨 
	printf("c= %lf\n", c);
	printf("c= %.20f\n", c); 
	
	char d = 'a'; //1byte
	unsigned char e = 'b'; //2byte
	printf("d=%c\n",d);
	printf("d=%c\n",e);
	//C는 string이 없음 그래서 str로 대체 
}
