#include<stdio.h>

int main() {
	int a;
	int b;
	int c;
	a = 1;
	b = 2;
	c = 1 + 2;
	printf("%d\n", c);

	// ������ ���� �̸� ����
	// �����̸� ����ҹ���, _, ���ڸ�
	// ��, ���� �Ǿ� ����
	// ����� ���� (int, return ��)
	
	// ������ ���� �̸� ����
	// �ҹ��� ����
	int id;
	int height;

	// �� �ܾ� �̻� ��������...
	int appStore; // ��Ÿ(camel) ǥ���
	int app_store; // ��(snake) ǥ���
	int howManyPeopleInThere;
	int how_many_people_in_there;


	// ����
	// print �̿��ؼ� 
	// 
	// 11111
	// 1   1
	// 11111
	// 
	// 33333
	// 3   3
	// 33333
	// �����

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