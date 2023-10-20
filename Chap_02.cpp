#include<stdio.h>

int main() {
	int a;
	int b;
	int c;
	a = 1;
	b = 2;
	c = 1 + 2;
	printf("%d\n", c);

	// 문법적 변수 이름 설명
	// 변수이름 영대소문자, _, 숫자만
	// 단, 숫자 맨앞 금지
	// 예약어 금지 (int, return 등)
	
	// 국룰적 변수 이름 설명
	// 소문자 시작
	int id;
	int height;

	// 두 단어 이상 합쳐지면...
	int appStore; // 낙타(camel) 표기법
	int app_store; // 뱀(snake) 표기법
	int howManyPeopleInThere;
	int how_many_people_in_there;


	// 퀴즈
	// print 이용해서 
	// 
	// 11111
	// 1   1
	// 11111
	// 
	// 33333
	// 3   3
	// 33333
	// 만들기

	int n = 1;
	printf("%d%d%d%d%d\n", n,n,n,n,n);
	printf("%d   %d\n", n, n);
	printf("%d%d%d%d%d\n", n, n, n, n, n);

	int m = 3;
	printf("%d%d%d%d%d\n", m,m,m,m,m);
	printf("%d   %d\n", m,m);
	printf("%d%d%d%d%d\n", m, m, m, m, m);


	return 0;
}