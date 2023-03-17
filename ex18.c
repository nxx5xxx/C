#include <stdio.h>
void main(){
	int i, arr_len;
	int num1 = 90, num2 = 70, num3=80;
	int* arr[3] = {&num1, &num2, &num3}; //int형 포인터 배열 선언 , 각 num의 주소 전달
	arr_len = sizeof(arr)/sizeof(arr[0]);
	printf("주소\t\t저장값\n");
	for (i =0; i< arr_len; i++){
		printf("%#x\t%d\n", arr[i], *arr[i]);
	} 
	printf("\n");
}
