#include <stdio.h>
void main(){
//1~100�� �Ҽ� ���ϱ�
//1�� �ڱ��ڽ����� ������ �ܿ� �ٸ����� ���������� �ռ��� 
int a,b;
int sw=0;
	for(a=2;a<=100;a++){
		for(b=2;b<a;b++){
			if(a%b==0){
				sw=1;
				break;
			}else {
				sw=0;
			}
		}
		if(sw==0){
			printf("%d\n",a);
				sw=1;
		}

	}

	
}
