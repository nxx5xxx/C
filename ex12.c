#include <stdio.h>
//함수의 종류(4가지) : 매개변수와 반환값에 유무나 개수에 따라 나뉨

//매개변수도 없고, 반환값도 없는 경우
//void는 리턴값이 없는경우 (즉 해당 함수내에서 다 처리를해야함) 
//void(공허함) 리턴이 없는 자료형 
void fn1(){
	printf("매개변수, 반환값 없는 함수1\n");
} 

//매개변수는 있으나, 반환값이 없는 경우 
void fn2(int a){
	printf("전달한 값 : %d, 제곱결과 : %d\n",a, a*a);
}

//매개변수는 없으나, 반환값이 있는경우 
int fn3(){
	int a=1004; //지역변수  
	return a/2; //return의 뜻은 반환한다는뜻 . int를 햇으니까 반환값으로 int로 반환해야함	
}

//매개변수와 반환값이 모두 존재하는 경우 
int fn4(int su){
	return su*su; //return타입은 int 
	//리턴이 있는경우는 받을값이 필요함 
}

int fn5(int su1, int su2){
	return su1*su2;
}

float fn6(int a,int b,float c){
	return a*b*c;
}

void main(){
	fn1();
	fn2(8);
	int x = fn3(); //메인함수에 있는 변수 = 전역변수 
	printf("반환값이 있는 데이터 : %d\n",x);
	int y = fn4(32);
	//리턴이 있는경우는 받을값이 필요함
	printf("전달한 값 : %d , 받은 결과값 : %d\n",32,y); 
	
	int z = fn5(32,60);
	printf("%d\n",z);
	
	float q = fn6(2,3,1.2);
	printf("%0.2f\n",q);
} 
