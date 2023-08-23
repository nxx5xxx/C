#include <stdio.h>
void main(){
	
int max,min,q;
int n1,n2; //입력받는 수 

printf("두 수를 입력하세요  : \n");
scanf("%d",&n1);
scanf("%d",&n2);

	for(q=1; q<=n1 && q<=n2; q++){
		if(n1%q==0 && n2%q==0){
			max=q;
		}
	}
min=n1*n2/max;
printf("최대공약수 : %d \n",max);
printf("최소공배수 : %d \n",min);

}
