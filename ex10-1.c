#include <stdio.h> 
void main(){
	//����Դ� �� 
	//�ݺ����๮�� Ȱ���Ͽ� �� ���� �Է¹޾� �ּ� ������� ����Ͽ� ���
	//�� ������ ���� �ִ������� ������ : �ּҰ���� 
	//�� ������ ����  �������� ���� �� �ִ� �� �߿� ���� ū �� : �ִ����� 
	printf("�� �ڿ����� �Է��ϼ���");
	int n1,n2,i;
	int lcm;//�ּҰ����
	int gcd;//�ִ����� 
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	for(i=1;i<=n1 && i<=n2;i++){ //ī��Ʈ�� �� �������� ���� �� ���� 
		if(n1 % i ==0 && n2 % i == 0){
			gcd=i;
		}
	}
	lcm= n1*n2/gcd;
	printf("�ִ����� : %d",gcd);
	printf("�ּҰ���� : %d",lcm);
}