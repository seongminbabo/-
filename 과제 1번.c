#include <stdio.h>//1�� ���� �Դϴ�.

void sum(int A[5], int B[5]); // �� ���� �迭�� ���� ���ϴ� void�Լ� �Դϴ�.
void mul(int A[5], int B[5]); // �� ���� �迭�� ���� ���ϴ� void�Լ� �Դϴ�.

int main(void)
{
	int A[5] = { 1, 2, 3, 4, 5 };//�̹� ���������� �迭 ���� �Է� ���� �ʽ��ϴ�.
	int B[5] = { 5, 4, 3, 2, 1 };

	sum(A, B);
	mul(A, B);

	return 0;
}

void sum(int A[5], int B[5]) {//�� ���� �迭�� ���� ���ϴ� void�Լ� �Դϴ�. 
	int i;
	printf("��: ");
	for (i = 0; i < 5; i++) {//for���� �̿��Ͽ� �迭�� ���� ����մϴ�.

		printf("%d ", A[i] + B[i]);


	}
	printf("\n");
}


void mul(int A[5], int B[5]) {// �� ���� �迭�� ���� ���ϴ� void�Լ� �Դϴ�.
	int i, j;
	printf("��: ");
	for (i = 0; i < 5; i++) {//for���� �̿��Ͽ� �� �迭�� ���� ���ϴ� ����Դϴ�.

		printf("%d ", A[i] * B[i]);


	}
	printf("\n");
}