#include <stdio.h>
//�Ҽ����ϱ�
//2,3,5,7�� �������� on
//�ٸ����� off
//2,3,5,7�ܿ� off���� ���
//��ȿ����
//�� ��� 
void main(){
	int x;
		printf("2\n3\n5\n7\n");
	for(x=2;x<=100;x++){
		if(x%2==0){
		}else if(x%3==0){
		}else if(x%5==0){
		}else if(x%7==0){
		}else{
			printf("%d\n",x);
		}
	}
	
}
