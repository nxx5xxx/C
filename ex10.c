#include <stdio.h> 
void main(){
	//����� 
	//�ݺ����๮�� Ȱ���Ͽ� �� ���� �Է¹޾� �ּ� ������� ����Ͽ� ���
	//�� ������ ���� �ִ������� �������� �ּҰ���� 
	printf("�� �ڿ����� �Է��ϼ���");
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
		printf("�ִ����� : %d\n",max);
		printf("�ּҰ���� : %d\n",lcm);
	}
