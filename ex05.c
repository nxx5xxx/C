#include <stdio.h>
void main(){
	int a = 30, b = 35, c = 32;
	printf("a=30 , b=35 , c=32 라 할때\n\n");
	//비교연산자(==, !=, >, >=, <, <=)
	printf("a==b : %d\n",  (a==b)); 
	printf("a!=b : %d\n", (a!=b)); 
	printf("a>b : %d\n", (a>b)); 
	printf("a>=b : %d\n", (a>=b)); 
	printf("a<b : %d\n", (a<b)); 
	printf("a<=b : %d\n", (a<=b));
	
	//논리연산자 (&& , || , !)and or not
	printf("\nAND\n");
	printf("a>b && b>c : %d && %d : %d\n",a>b,b>c,(a>b && b>c));
	printf("a>b && b<c : %d && %d : %d\n",a>b,b<c,(a>b && b<c)); 
	printf("a<b && b>c : %d && %d : %d\n",a<b,b>c,(a<b && b>c));
	printf("a<b && b<c : %d && %d : %d\n",a<b,b<c,(a>b && b>c));
	printf("\nOR\n");
	printf("a>b || b>c : %d || %d : %d\n",a>b,b>c,(a>b || b>c));
	printf("a>b || b<c : %d || %d : %d\n",a>b,b<c,(a>b || b<c)); 
	printf("a<b || b>c : %d || %d : %d\n",a<b,b>c,(a<b || b>c));
	printf("a<b || b<c : %d || %d : %d\n",a<b,b<c,(a>b || b>c));
	printf("\nNOT\n");
	printf("!(a>b) : %d\n",!(a>b));
	printf("!(a==b) : %d\n",!(a==b));
	printf("!(a>b || b>c) : !(%d || %d) : %d\n",a>b,b>c,!(a>b || b>c));
	
}
