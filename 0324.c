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


//최소공배수 , 최대공약수 구하기
	//반복실행문을 활용하여 두 수를 입력받아 최소 공배수를 계산하여 출력
	//두 정수의 수를 최대공약수로 나눈수 : 최소공배수 
	//두 정수의 곱을  공통으로 나눌 수 있는 수 중에 가장 큰 수 : 최대공약수
	
int max,min,q;
int n1,n2; //입력받는 수 

printf("두 수를 입력하세요  : ");
scanf("%d",&n1);
scanf("%d",&n2);

	for(q=1; q<=n1 && q<=n2; q++){
		if(n1%q==0 && n2%q==0){
			max=q;
		}
	}
printf("최대공약수 : %d \n",max);
min=n1*n2/max;
printf("최소공배수 : %d \n",min);



//99단
int x,y;
	for(x=1;x<10;x++){
		for(y=2;y<10;y++){
			printf("%d*%d=%d\t",y,x,(x*y));
		}printf("\n");
	}
}
