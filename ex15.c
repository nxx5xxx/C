#include <stdio.h>

void main(){
	//1차원 배열
	int i;
	int sum = 0; 
	int score[3] = {85,65,90}; // [0][1][2]만 선언 및 초기화 
	score[3]=100; // [3]을 선언하지않고 초기화 진행 
	for(i=0; i<4; i++){
		sum+= score[i];
	}
	int arr_len = sizeof(score)/sizeof(score[1]) + 1 ; //배열의 길이 구하는공식
	printf("배열 score의 길이는 %d입니다\n", arr_len);
	printf("과목 총 점수 합계는 %d 이고,평균점수는 %f입니다.\n",sum,(double)sum/arr_len); 
}
