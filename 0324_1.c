#include <stdio.h>
void main(){
//1~100의 소수 구하기
//1과 자기자신으로 나눈수 외에 다른수로 나뉘어지면 합성수 
int a,b;
int sw=0;
	for(a=2;a<=100;a++){
		for(b=2;b<a;b++){
			if(a%b==0){
				sw=1;
				break;
			}else {
				sw=0;
			}
		}
		if(sw==0){
			printf("%d\n",a);
				sw=1;
		}

	}

	
}
