#include <stdio.h>
void main(){
	
int max,min,q;
int n1,n2; //�Է¹޴� �� 

printf("�� ���� �Է��ϼ���  : \n");
scanf("%d",&n1);
scanf("%d",&n2);

	for(q=1; q<=n1 && q<=n2; q++){
		if(n1%q==0 && n2%q==0){
			max=q;
		}
	}
min=n1*n2/max;
printf("�ִ����� : %d \n",max);
printf("�ּҰ���� : %d \n",min);

}
