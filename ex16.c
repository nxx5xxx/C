#include <stdio.h>
void main(){
	//c�� 2�����迭�� �迭���� �°� �Ϸķ� �����ص� ��������� 
	int arr01[2][3] = {90,60,80,70,85,75}; //�̰͵� 2�����迭 
	int arr02[2][3] ={
		{75,95,80},
		{85,70,90}
	};
	
	int arr03[][4] ={
		{80,85},			//�����迭�� (2�� 4ĭ)
		{90,95,75,70},
		{65,70,85,80}					//���� ĭ���� �˾Ƽ� 0���� ä���ش�
	};
	//�迭�� ��ȸ
	printf("����\tDB\tP/G\t����\n");
	int i, j, tot=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",arr02[i][j]);
			tot+=arr02[i][j];
		}printf("%d\n",tot); tot=0;
	} 
}