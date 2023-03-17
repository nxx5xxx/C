#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void main(){
	//문자열과 처리 
	char str[100];
	fputs("문자열을 입력해 주세요 :\n", stdout); //파일 또는 모니터로 데이터 출력 
	fgets(str, sizeof(str), stdin); // 파일 또는 키보드로 데이터 입력
	puts("입력하신 문자열 : "); //모니터로 출력
	puts(str);
	//stdin : 표준입력인 키보드로, stdout : 표준출력인 모니터로
	
	char str[] = "C언어";
	printf("이 문자열의 길이는 %d입니다.\n", strlen(str));
	char str01[20] = "C language is "; //Null 문자를 포함하여 15문자
	char str02[] = "Cool! and funny!";
	
	
}
