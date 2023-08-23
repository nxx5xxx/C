#include <stdio.h>
void main(){
	int a,b,c,d,e,sum;
	float avg;
	printf("1번값 입력");
	scanf("%d",&a);
	printf("2번값 입력");
	scanf("%d",&b);
	printf("3번값 입력");
	scanf("%d",&c);
	printf("4번값 입력");
	scanf("%d",&d);
	printf("5번값 입력");
	scanf("%d",&e);
	
	sum = a+b+c+d+e;
	avg = sum/5.f;
	printf("총합 : %d",sum);
	printf("\n평균 : %f",avg);
}
