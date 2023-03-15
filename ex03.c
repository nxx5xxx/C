#include <stdio.h>
void main(){
	//이스케이프 문자 [(*)는 java에선 없는것 ]
	// \' , \" , \?(*) , \\ , \n
	// \t : 수평탭tab
	// \v : 수직탭(*) 
	// \a : 경고음 출력(*) 
	// \b : 백스페이스
	// \r : 캐리지리턴 (현재 줄에 첫번째 칸으로 오는것)
	// \f : 폼 피드(화면 스크롤)
	// java에서는 "?"가 되지만 C에선 \?로 해야 ?를 출력이 가능 
	
	// 서식지정자 
	/*
	 %c : 문자
	 %s : 문자배열
	 %d , %i : 부호가 있는 10진수 정수
	 %u : 부호가 없는 10진수 정수 
	 %f , %lf : 실수
	 %o : 8진수
	 %x : 16진수
	 %e , %E , %g , %G : 지수 (ex 10의 6승 > e+06)
	 %% : 백분율 기호 
	*/ 
	int num,kor,eng,mat,tot;
	printf("번호 : ");
	scanf("%d", &num); //&는 주소(번지수) 
	// num이라는 주소에 %d(10진수)형식으로 넣어라
	//new nextint(); 랑 비슷하다 보면됨 
	printf("국어 점수 : ");
	scanf("%d", &kor);
	printf("영어 점수 : ");
	scanf("%d", &eng);
	printf("수학 점수 : ");
	scanf("%d", &mat);
	tot = kor+eng+mat;
	float avg = tot/3.0f;
	
	printf("번호\t국어\t영어\t수학\t총점\t평균\n");
	printf("%d\t%d\t%d\t%d\t%d\t%.2f\t",num,kor,eng,mat,tot,avg);
}
