#include <stdio.h>
#define l 3//A����� ��
#define m 3//A����� ��, B����� �� 
#define n 3//B����� ��

int main(void) {
	int i, j, k;
	int A[l][m];
	int B[m][n];
	int C[l][n]; // C = A �� B
	for (i = 0; i < l; i++) {//2�� for���� �̿��Ͽ� A����� ���� �Է¹޴� �ڵ��Դϴ�.
		for (j = 0; j < m; j++) {
			printf("A[%d][%d]: ", i, j);
			scanf_s("%d", &A[i][j]);
			printf("\n");
		}
	}
	for (i = 0; i < m; i++) {//2�� for���� �̿��Ͽ� B����� ���� �Է¹޴� �ڵ��Դϴ�.
		for (j = 0; j < n; j++) {
			printf("B[%d][%d]: ", i, j);
			scanf_s("%d", &B[i][j]);
			printf("\n");
		}
	}
	for (i = 0; i < l; i++)//2�� for���� �̿��Ͽ� A��İ� B����� ���� C��Ŀ� �Է��ϴ� �ڵ��Դϴ�.
		for (j = 0; j < n; j++) {
			C[i][j] = 0;
			for (k = 0; k < m; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	for (i = 0; i < 3; i++) {//������ ���� C����� ���� ����ϴ� �ڵ��Դϴ�.
		for (j = 0; j < n; j++)
			printf("C[%d][%d]=%d\t", i, j, C[i][j]);
		printf("\n");
	}
	return 0;
}