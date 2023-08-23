#include <stdio.h>
int main(void) {
	int sum = 0;
	int i = 0;
	for(i = 0; i <= 10; i++) {
		if(i % 2 != 0){
			continue;//2의 배수가 아닐때 즉, 1,3,5,7,9일땐 다시 처음으로 돌아와서 진행하라 
		}
		printf("%d", i );	
		sum += i;
	}
	printf("%d", i + sum);
}
