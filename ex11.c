#include <stdio.h>
void main(){
	//구구단만들기
	int x,y;
	for(x=1;x<10;x++){
		for(y=2;y<10;y++){
			printf("%d*%d=%d\t",y,x,(x*y));
		}printf("\n");
	} 
	//함수 : 함축된 수식
	int dan;
	scanf("%d", &dan);
	gugudan(dan); //전달변수  
} 
//함수는 정의가 되어있어야하고 호출을해야함(호출되면 전달값이 인식되어 처리한다.) 
void gugudan(int su){ //함수의 정의 
//()안은 매개변수(=받는변수) 
//()내부는 타입이 같아야함 int dan이므로 int su
//전달변수의 개수와 매개변수의 개수가 같아야함
//전달,매개 변수는 없을수도있음 
//dan에 숫자를 입력하면 gugudan에 전달되어서 su로 감 
	int a;
		for(a=1;a<10;a++){
			printf("%d*%d=%d\t",su,a,su*a);
		}printf("\n");


}
