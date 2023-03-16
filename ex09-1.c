#include <stdio.h>
//소수구하기
//2,3,5,7로 나눈것을 on
//다른것은 off
//2,3,5,7외에 off값만 출력
//비효율적
//내 답안 
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
