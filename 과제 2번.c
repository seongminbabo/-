#include <stdio.h>
#define row 3//row�� col�� 3���� �����صξ����� �ٸ� ���� ������ �׿� �´� �������� �迭�� �����˴ϴ�.
#define col 3
int main() {
	int i, j;
	int arr[row][col];

	for (i = 0; i < row; i++) {//2�� for���� �̿��Ͽ� �迭���� �Է� �޴� �ڵ��Դϴ�.
		for (j = 0; j < col; j++) {
			printf("arr[%d][%d]: ", i, j);
			scanf_s("%d", &arr[i][j]);
			printf("\n");
		}
	}
	puts("\n");
	for (i = 0; i < row; i++) {//������ �Է¹��� �迭���� 2�� for���� �̿��ؼ� ����ϴ� �ڵ��Դϴ�.
		for (j = 0; j < col; j++) {
			printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
		}
	}
}