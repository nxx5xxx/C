#include <stdio.h>

void main(){
	//1���� �迭
	int i;
	int sum = 0; 
	int score[3] = {85,65,90}; // [0][1][2]�� ���� �� �ʱ�ȭ 
	score[3]=100; // [3]�� ���������ʰ� �ʱ�ȭ ���� 
	for(i=0; i<4; i++){
		sum+= score[i];
	}
	int arr_len = sizeof(score)/sizeof(score[1]) + 1 ; //�迭�� ���� ���ϴ°���
	printf("�迭 score�� ���̴� %d�Դϴ�\n", arr_len);
	printf("���� �� ���� �հ�� %d �̰�,��������� %f�Դϴ�.\n",sum,(double)sum/arr_len); 
}
