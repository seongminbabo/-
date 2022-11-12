#include <stdio.h>//1번 과제 입니다.

void sum(int A[5], int B[5]); // 두 일차 배열의 합을 구하는 void함수 입니다.
void mul(int A[5], int B[5]); // 두 일차 배열의 곱을 구하는 void함수 입니다.

int main(void)
{
	int A[5] = { 1, 2, 3, 4, 5 };//이번 문제에서는 배열 값을 입력 받지 않습니다.
	int B[5] = { 5, 4, 3, 2, 1 };

	sum(A, B);
	mul(A, B);

	return 0;
}

void sum(int A[5], int B[5]) {//두 일차 배열의 합을 구하는 void함수 입니다. 
	int i;
	printf("합: ");
	for (i = 0; i < 5; i++) {//for문을 이용하여 배열의 합을 출력합니다.

		printf("%d ", A[i] + B[i]);


	}
	printf("\n");
}


void mul(int A[5], int B[5]) {// 두 일차 배열의 곱을 구하는 void함수 입니다.
	int i, j;
	printf("곱: ");
	for (i = 0; i < 5; i++) {//for문을 이용하여 두 배열의 곱을 구하는 방식입니다.

		printf("%d ", A[i] * B[i]);


	}
	printf("\n");
}