#include <stdio.h>

void main(){
	int n=100; 		//변수의 선언 
	int v=&n; 		//&는 주소연산자, 주소를전달 주소는 16진수로 저장되므로 (%#x)를 써서 출력해야함 
	int *ptr=&n;	//참조연산자(*) =포인터 :  ptr은 주소를저장 *ptr은 해당주소의 데이터를 저장 
	int *pptr=&ptr;	//*~ =&x : x주소의 데이터
	int pptr2=&ptr; //?
	printf("n의 값 :%d\n",n);
	printf("v는 &n을 대입하였으므로 주소 : %#x\n", v);
	printf("ptr은 &n을 대입하였으므로 주소 : %#x\n", ptr);
	printf("*ptr은 ptr 주소에 있는 데이터 값 : %d\n",*ptr);
	printf("pptr은 pptr의 주소 : %#x\n",pptr);
	printf("*pptr은 ptr의 주소 : %#x\n",*pptr);
	printf("pptr2는 ptr의 주소 *pptr2는 불가(선언할때 *를 안붙였으므로) : %#x\n", pptr2);
	//포인터의 계산
	//타입에 *를 넣으면 데이터가 아닌 주소 
	char* ptr_char=0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	printf("포인터 ptr_char가 현재 가르키고 있는 주소값은 %#x입니다.\n", ptr_char);
	printf("포인터 ptr_int가 현재 가르키고 있는 주소값은 %#x입니다.\n", ptr_int);
	printf("포인터 ptr_double이 현재 가르키고 있는 주소값은 %#x입니다.\n", ptr_double);
	printf("포인터 ptr_char가 1증가 후에 가리키고 있는 주소값은 %#x입니다.\n",++ptr_char);
	printf("포인터 ptr_int가 1증가 후에 가리키고 있는 주소값은 %#x입니다.\n",++ptr_int);
	printf("포인터 ptr_double이 1증가 후에 가리키고 있는 주소값은 %#x입니다.\n",++ptr_double);
	
}
