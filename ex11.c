#include <stdio.h>
void main(){
	//�����ܸ����
	int x,y;
	for(x=1;x<10;x++){
		for(y=2;y<10;y++){
			printf("%d*%d=%d\t",y,x,(x*y));
		}printf("\n");
	} 
	//�Լ� : ����� ����
	int dan;
	scanf("%d", &dan);
	gugudan(dan); //���޺���  
} 
//�Լ��� ���ǰ� �Ǿ��־���ϰ� ȣ�����ؾ���(ȣ��Ǹ� ���ް��� �νĵǾ� ó���Ѵ�.) 
void gugudan(int su){ //�Լ��� ���� 
//()���� �Ű�����(=�޴º���) 
//()���δ� Ÿ���� ���ƾ��� int dan�̹Ƿ� int su
//���޺����� ������ �Ű������� ������ ���ƾ���
//����,�Ű� ������ ������������ 
//dan�� ���ڸ� �Է��ϸ� gugudan�� ���޵Ǿ su�� �� 
	int a;
		for(a=1;a<10;a++){
			printf("%d*%d=%d\t",su,a,su*a);
		}printf("\n");


}
