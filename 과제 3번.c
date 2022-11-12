#include <stdio.h>
#define l 3//A행렬의 행
#define m 3//A행렬의 열, B행렬의 행 
#define n 3//B행렬의 열

int main(void) {
	int i, j, k;
	int A[l][m];
	int B[m][n];
	int C[l][n]; // C = A ⅹ B
	for (i = 0; i < l; i++) {//2중 for문을 이용하여 A행렬의 값을 입력받는 코드입니다.
		for (j = 0; j < m; j++) {
			printf("A[%d][%d]: ", i, j);
			scanf_s("%d", &A[i][j]);
			printf("\n");
		}
	}
	for (i = 0; i < m; i++) {//2중 for문을 이용하여 B행렬의 값을 입력받는 코드입니다.
		for (j = 0; j < n; j++) {
			printf("B[%d][%d]: ", i, j);
			scanf_s("%d", &B[i][j]);
			printf("\n");
		}
	}
	for (i = 0; i < l; i++)//2중 for문을 이용하여 A행렬과 B행렬의 곱을 C행렬에 입력하는 코드입니다.
		for (j = 0; j < n; j++) {
			C[i][j] = 0;
			for (k = 0; k < m; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	for (i = 0; i < 3; i++) {//위에서 계산된 C행렬의 값을 출력하는 코드입니다.
		for (j = 0; j < n; j++)
			printf("C[%d][%d]=%d\t", i, j, C[i][j]);
		printf("\n");
	}
	return 0;
}