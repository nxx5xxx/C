#include <stdio.h>
void main(){
	int a,b,c,d,e,sum;
	float avg;
	printf("1���� �Է�");
	scanf("%d",&a);
	printf("2���� �Է�");
	scanf("%d",&b);
	printf("3���� �Է�");
	scanf("%d",&c);
	printf("4���� �Է�");
	scanf("%d",&d);
	printf("5���� �Է�");
	scanf("%d",&e);
	
	sum = a+b+c+d+e;
	avg = sum/5.f;
	printf("���� : %d",sum);
	printf("\n��� : %f",avg);
}
