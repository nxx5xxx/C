#include <stdio.h>
void main(){
	//�Ǽ� (�ε��Ҽ�����) : ���� ū ���� ���� ���� ���� ����
	//��ȣ, ���� , ���� ������ �̷���� 
	float a = 3.14159272; 
	//4byte : ���� 8��Ʈ, ���� 23��Ʈ 
	double b = 321.123456789012; 
	//8byte : ���� 11��Ʈ, ����  
	printf("a=%f\n",a);
	printf("b=%f\n",b);
	//�⺻����� �ϸ� �Ҽ��� 6��°���� ǥ���� 
	printf("a=%.9f\n",a);
	printf("b=%15.9f\n",b);

	long double c = a + b ; //8byte
	//float(4byte)+double(8byte)�� ���ϸ� ������ ����������� 0���� ��µ� 
	printf("c= %lf\n", c);
	printf("c= %.20f\n", c); 
	
	char d = 'a'; //1byte
	unsigned char e = 'b'; //2byte
	printf("d=%c\n",d);
	printf("d=%c\n",e);
	//C�� string�� ���� �׷��� str�� ��ü 
}
