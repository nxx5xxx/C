
#include <stdio.h>
//����ü�� ����ü
struct book {//����ü�� ����ٸ� ���������� (=���,�ʵ�) 
				//����ü : �ڹ��� Ŭ������ ���� ���� ����� �ϳ��� �̸����� ����ȭ��
	char title[30]; 
	char author[30];
	int price; 
};

//����ü (���Ͽ�=������) :����ü�� �� �´¸� 
typedef union{ //����ü : ���� ������� �ϳ��� �޸� ������ Ȱ���Ͽ� ����
	unsigned char a;
	unsigned short b;
	unsigned int c;
	//a,b,c���� ���� �ִ� a,b,c�� �� �������� ���� (a=b=c)
} SHAREDATA;

//enum = ������ (������� ��Ƴ��°� -��� : �������ʴ°�) 
enum Weather {SUNNY = 0 , CLOUD = 10 , RAIN = 20, SNOW =30};
//enum Weather wt���� �������� SUNNY�� �ϸ� 0�̴��� CLOUD�� �ϸ� 10�� ���Ե� 

void main(void){
	//����ü Ȱ��
	struct book my_book = {"HTML�� CSS", "ȫ�浿", 28000};
	//Struct book�̶�� ����ü�κ��� my_book�� ���� 
	//title�� HT~, Author�� ȫ�浿 , price�� 28000 
	struct book java_book = {.title = "Java_language", .price=30000};
	//������ ���������� struct���ִ� ���� �ϳ��� ����������� ���⼭�� author�� ������ title�� price�� ��������
	
	printf("ù ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d�� �Դϴ�.\n",my_book.title,my_book.author,my_book.price);
	printf("�� ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d�� �Դϴ�.\n",java_book.title,java_book.author,java_book.price); 
	//author�� ����������Ƿ� ����ִ�ä�� ��µ�
	
	//����ü Ȱ��
	SHAREDATA var;
	var.c =  0x12345678;
	printf("%x\n",var.a); //char
	printf("%x\n",var.b); //short 2byte
	printf("%x\n",var.c); //int 4byte
	printf("var �� ��������� : %x\n",var);
	 
	//������ Ȱ��
	enum Weather wt;
	wt = SUNNY;
			switch(wt){
				case SUNNY:
					puts("�޺�¸¸!"); //����ͷ� ��� 
				break;	
				case CLOUD:
					puts("�帰����");
				break;
				case RAIN:
					puts("�� �ɴϴ�");
				break;
				case SNOW:
					puts("������ ���ο� �ϴ� ��");
				break;
				default: puts("���������� �����ϴ�");
			} 
			puts("������ ����ü�� �ش��ϴ� �������� ������ �����ϴ�. : ");
			printf("%d %d %d %d\n", SUNNY,CLOUD,RAIN,SNOW);
}
