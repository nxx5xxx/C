#include <stdio.h>
void main(){
	//���ǹ� : if , if else , if else if else , switch case break;
	int edps, db, pg, tot=0;
	printf("��ǻ�� �Ϲ� ���� : ");
	scanf("%d", &edps); //scanf�� ���ȳ��� ex03.c������
	printf("������ ���̽� ���� : ");
	scanf("%d", &db); //scanf("x", &y) x���ο� %~ �ܿ� �ٸ����� ���� ����� �Է��� ������ 
	//ex ) (" �Է��ϼ��� %d ", &db); �Է��ϼ���� printf�� ����������� 
	printf("���α׷��� ���� : ");
	scanf("%d",&pg);
	char pass='F';
	tot = edps+db+pg;
	float avg = tot/3.0f;
	//if
	//����, ����� 60�̻��̸�, pass�� 'T'�̰� �ƴϸ� 'F'
	if(avg>=60) pass='T';
	printf("%c\n",pass) ;
	
	if(pass=='T'){
		printf("�հ�\n");
	}else{
		printf("���հ�\n");
	}
	//��� 10������ ��� �� �� �� �� ���� ��Ÿ����(60���̸��� �� '��'��)
	printf("���� : "); 
		if(avg>=90){
			printf("��\n");
		}else if(avg>=80){
			printf("��\n");
		}else if(avg>=70){
			printf("��\n");
		}else if(avg>=60){
			printf("��\n");
		}else{
			printf("��\n");
		}
	//���� ��� ���� - � �����̶� 95 �̻��̸�, "������" �ƴϸ�,"����"
	printf("���� �������: ");
	if(edps>=90&&db>=90&&pg>=90){
		printf("������л�\n");
	}else{
	
			if(edps>=95||db>=95||pg >=95){
				printf("������\n"); 
			} else{
				printf("����\n");
			}
		}
	//������� - ��� ������ 90�̻��̸�, "������л�", �ƴϸ� "�Ϲ�" 
	
	//��� : 10���� ���� ������ 10�Ǵ� 9�̸� 1���, 8�̸� 2���,
	//7�̸�, 3���, �������� 5��� (switch case break)
	printf("��� : ");
	switch((int)avg/10){
		case 10:
		case 9:
			printf("1���");
			break;
		case 8:
			printf("2���");
			break;
		case 7:
			printf("3���");
			break;
		default:
			printf("5���");
		}
	 
}
