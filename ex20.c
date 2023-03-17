
#include <stdio.h>
//구조체와 공용체
struct book {//구조체는 각기다른 변수를가짐 (=멤버,필드) 
				//구조체 : 자바의 클래스와 같이 여러 멤버를 하나의 이름으로 구조화함
	char title[30]; 
	char author[30];
	int price; 
};

//공용체 (유니온=합집합) :공유체가 더 맞는말 
typedef union{ //공용체 : 여러 멤버들이 하나의 메모리 공간을 활용하여 공유
	unsigned char a;
	unsigned short b;
	unsigned int c;
	//a,b,c무슨 값을 넣던 a,b,c는 다 같은값이 나옴 (a=b=c)
} SHAREDATA;

//enum = 열거형 (상수값을 모아놓는것 -상수 : 변하지않는값) 
enum Weather {SUNNY = 0 , CLOUD = 10 , RAIN = 20, SNOW =30};
//enum Weather wt같이 지정한후 SUNNY를 하면 0이대입 CLOUD를 하면 10이 대입됨 

void main(void){
	//구조체 활용
	struct book my_book = {"HTML과 CSS", "홍길동", 28000};
	//Struct book이라는 구조체로부터 my_book을 만듦 
	//title엔 HT~, Author엔 홍길동 , price엔 28000 
	struct book java_book = {.title = "Java_language", .price=30000};
	//개수가 맞지않으면 struct에있는 값을 하나씩 지정해줘야함 여기서는 author가 빠져서 title과 price를 지정해줌
	
	printf("첫 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원 입니다.\n",my_book.title,my_book.author,my_book.price);
	printf("두 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원 입니다.\n",java_book.title,java_book.author,java_book.price); 
	//author는 비어져있으므로 비어있는채로 출력됨
	
	//공용체 활용
	SHAREDATA var;
	var.c =  0x12345678;
	printf("%x\n",var.a); //char
	printf("%x\n",var.b); //short 2byte
	printf("%x\n",var.c); //int 4byte
	printf("var 만 출력했을시 : %x\n",var);
	 
	//열거형 활용
	enum Weather wt;
	wt = SUNNY;
			switch(wt){
				case SUNNY:
					puts("햇빗쨍쨍!"); //모니터로 출력 
				break;	
				case CLOUD:
					puts("흐린날씨");
				break;
				case RAIN:
					puts("비가 옵니다");
				break;
				case SNOW:
					puts("오늘은 눈싸움 하는 날");
				break;
				default: puts("날씨정보가 없습니다");
			} 
			puts("각각의 열거체에 해당하는 정수값은 다음과 같습니다. : ");
			printf("%d %d %d %d\n", SUNNY,CLOUD,RAIN,SNOW);
}
