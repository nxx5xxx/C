#include <stdio.h>
void main(){
	int i, arr_len;
	int num1 = 90, num2 = 70, num3=80;
	int* arr[3] = {&num1, &num2, &num3}; //int�� ������ �迭 ���� , �� num�� �ּ� ����
	arr_len = sizeof(arr)/sizeof(arr[0]);
	printf("�ּ�\t\t���尪\n");
	for (i =0; i< arr_len; i++){
		printf("%#x\t%d\n", arr[i], *arr[i]);
	} 
	printf("\n");
}
