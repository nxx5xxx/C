#include <stdio.h>
void main(){
	//조건문 : if , if else , if else if else , switch case break;
	int edps, db, pg, tot=0;
	printf("컴퓨터 일반 점수 : ");
	scanf("%d", &edps); //scanf가 기억안날때 ex03.c를참조
	printf("데이터 베이스 점수 : ");
	scanf("%d", &db); //scanf("x", &y) x내부에 %~ 외에 다른것이 들어가면 제대로 입력을 못받음 
	//ex ) (" 입력하세요 %d ", &db); 입력하세요는 printf로 나누어줘야함 
	printf("프로그래밍 점수 : ");
	scanf("%d",&pg);
	char pass='F';
	tot = edps+db+pg;
	float avg = tot/3.0f;
	//if
	//만약, 평균이 60이상이면, pass는 'T'이고 아니면 'F'
	if(avg>=60) pass='T';
	printf("%c\n",pass) ;
	
	if(pass=='T'){
		printf("합격\n");
	}else{
		printf("불합격\n");
	}
	//평균 10단위로 끊어서 수 우 미 양 가로 나타낸다(60점미만은 다 '가'로)
	printf("학점 : "); 
		if(avg>=90){
			printf("수\n");
		}else if(avg>=80){
			printf("우\n");
		}else if(avg>=70){
			printf("미\n");
		}else if(avg>=60){
			printf("양\n");
		}else{
			printf("가\n");
		}
	//과목 우수 여부 - 어떤 과목이라도 95 이상이면, "과목우수" 아니면,"보통"
	printf("과목 우수여부: ");
	if(edps>=90&&db>=90&&pg>=90){
		printf("우수장학생\n");
	}else{
	
			if(edps>=95||db>=95||pg >=95){
				printf("과목우수\n"); 
			} else{
				printf("보통\n");
			}
		}
	//참고사항 - 고든 과목이 90이상이면, "우수장학생", 아니면 "일반" 
	
	//등급 : 10으로 나눈 몫으로 10또는 9이면 1등급, 8이면 2등급,
	//7이면, 3등급, 나머지는 5등급 (switch case break)
	printf("등급 : ");
	switch((int)avg/10){
		case 10:
		case 9:
			printf("1등급");
			break;
		case 8:
			printf("2등급");
			break;
		case 7:
			printf("3등급");
			break;
		default:
			printf("5등급");
		}
	 
}
