#include <stdio.h>
int main(void) {
	int sum = 0;
	int i = 0;
	for(i = 0; i <= 10; i++) {
		if(i % 2 != 0){
			continue;//2�� ����� �ƴҶ� ��, 1,3,5,7,9�϶� �ٽ� ó������ ���ƿͼ� �����϶� 
		}
		printf("%d", i );	
		sum += i;
	}
	printf("%d", i + sum);
}
