#include <stdio.h>
void main()
{
	int age=5;
	//����� �ȵ�,  �����ҹ��� �־����,($��_����)	
	short a=32768; //2byte
	//�����÷ο� �߻� -32768~32767�� ������ ��� 
	unsigned short b = 32768; //2byte
	//unsigned : -32768~32767�� �������� ���������� ����� �ٲ��� 0~65535
	//java���� ���±��
	//unsigned byte,short,int,long
	//java���� long�� 8byte������ C���� long�� 4byte�̴�
	
	int c = -1000;
	unsigned int d = 1000; 
	long e = -300;
	unsigned long f = 300;
	 
	printf("������ ���� : %d\n",a) ;
	printf("��ȣ�� ���� ������ ���� : %d\n",b);
	printf("�Ϲ� ���� : %d\n",c);
	printf("��ȣ�� ���� �Ϲ� ���� : %d\n",d);
	printf("������ ���� : %d\n",e);
	printf("��ȣ�� ���� ������ ���� : %d\n",f);
	printf("����� ���̴� %d�Դϴ�.",age);
	//printf�� �ڹٶ� �Ȱ��� �ۿ� 
} //�ڹ�ó�� �ڵ����� garbage colletion(�޸�����)�� �̷��������� 
