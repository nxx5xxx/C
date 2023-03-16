#include <stdio.h> 
void main(){
	//강사님답 안 
	//반복실행문을 활용하여 두 수를 입력받아 최소 공배수를 계산하여 출력
	//두 정수의 수를 최대공약수로 나눈수 : 최소공배수 
	//두 정수의 곱을  공통으로 나눌 수 있는 수 중에 가장 큰 수 : 최대공약수 
	printf("두 자연수를 입력하세요");
	int n1,n2,i;
	int lcm;//최소공배수
	int gcd;//최대공약수 
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	for(i=1;i<=n1 && i<=n2;i++){ //카운트를 두 정수보다 작을 때 까지 
		if(n1 % i ==0 && n2 % i == 0){
			gcd=i;
		}
	}
	lcm= n1*n2/gcd;
	printf("최대공약수 : %d",gcd);
	printf("최소공배수 : %d",lcm);
}
