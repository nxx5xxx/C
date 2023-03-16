#include <stdio.h> 
void main(){
	//내답안 
	//반복실행문을 활용하여 두 수를 입력받아 최소 공배수를 계산하여 출력
	//두 정수의 수를 최대공약수로 나눈수가 최소공배수 
	printf("두 자연수를 입력하세요");
	int n1,n2,i,lcm,max; 
	scanf("%d",&n1);
	scanf("%d",&n2);
		for(i=1;(i<=n1&&i<=n2);i++){
				//printf("%d",i);
			if((n1%i==0) && (n2%i==0)){
				printf("%d\n",i);
				max=i;
			}
		}
		lcm = (n1*n2)/max;
		printf("최대공약수 : %d\n",max);
		printf("최소공배수 : %d\n",lcm);
	}
