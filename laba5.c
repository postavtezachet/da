#include<stdio.h>
#include<locale.h>
#define n 4
#define m 3
int main() {
	setlocale(LC_ALL, "Russian");
	int mas[n][m];
	int k = 0,s;
	printf("������� ����� ������� ������ ����� ");
	scanf("%d",&s);
	printf("������� �������");
	for (int i = 0; i < n; i++) { // ����  ������� � ����������
		for (int j = 0; j < m; j++) {
			scanf("%d" ,&mas[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < n; i++) { // ����� �������
		for (int j = 0; j < m; j++) {
			printf("%d ", mas[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s == mas[i][j]) { // ��������� ��������� �� ������ ������ ������� ��������� �����
				k++; // ���� �� ����������� ������� �� 1
			}
		}
	}
	printf("����� %d ����������� %d ", s, k);
	return 0;

}