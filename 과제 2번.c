#include <stdio.h>
#define row 3//row와 col을 3으로 설정해두었지만 다른 값을 넣으면 그에 맞는 사이즈의 배열이 생성됩니다.
#define col 3
int main() {
	int i, j;
	int arr[row][col];

	for (i = 0; i < row; i++) {//2중 for문을 이용하여 배열값을 입력 받는 코드입니다.
		for (j = 0; j < col; j++) {
			printf("arr[%d][%d]: ", i, j);
			scanf_s("%d", &arr[i][j]);
			printf("\n");
		}
	}
	puts("\n");
	for (i = 0; i < row; i++) {//위에서 입력받은 배열값을 2중 for문을 이용해서 출력하는 코드입니다.
		for (j = 0; j < col; j++) {
			printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
		}
	}
}