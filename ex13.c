#include <stdio.h>
//변수의 유효범위 (scope) 
void main(){
	int i=5;
	int var=10;
	printf("main() 함수 내의 지역변수 var의 값은 %d입니다.\n",var);
	if (i<10){
		local();
		int var=30;
		printf("if 문 내의 지역변수 var의 값은 %d입니다.\n", var);
	}
	printf("현재 지역변수 var의 값은 %d입니다.\n",var);
}

void local(){
	int var=20;
	printf("local()함수 내의 지역변수 var의 값은 %d입니다.\n",var);
}
