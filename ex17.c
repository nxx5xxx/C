#include <stdio.h>

void main(){
	int n=100; 		//������ ���� 
	int v=&n; 		//&�� �ּҿ�����, �ּҸ����� �ּҴ� 16������ ����ǹǷ� (%#x)�� �Ἥ ����ؾ��� 
	int *ptr=&n;	//����������(*) =������ :  ptr�� �ּҸ����� *ptr�� �ش��ּ��� �����͸� ���� 
	int *pptr=&ptr;	//*~ =&x : x�ּ��� ������
	int pptr2=&ptr; //?
	printf("n�� �� :%d\n",n);
	printf("v�� &n�� �����Ͽ����Ƿ� �ּ� : %#x\n", v);
	printf("ptr�� &n�� �����Ͽ����Ƿ� �ּ� : %#x\n", ptr);
	printf("*ptr�� ptr �ּҿ� �ִ� ������ �� : %d\n",*ptr);
	printf("pptr�� pptr�� �ּ� : %#x\n",pptr);
	printf("*pptr�� ptr�� �ּ� : %#x\n",*pptr);
	printf("pptr2�� ptr�� �ּ� *pptr2�� �Ұ�(�����Ҷ� *�� �Ⱥٿ����Ƿ�) : %#x\n", pptr2);
	//�������� ���
	//Ÿ�Կ� *�� ������ �����Ͱ� �ƴ� �ּ� 
	char* ptr_char=0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	printf("������ ptr_char�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_char);
	printf("������ ptr_int�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_int);
	printf("������ ptr_double�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_double);
	printf("������ ptr_char�� 1���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n",++ptr_char);
	printf("������ ptr_int�� 1���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n",++ptr_int);
	printf("������ ptr_double�� 1���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n",++ptr_double);
	
}
