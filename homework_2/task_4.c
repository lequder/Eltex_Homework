#include <stdio.h>

int main() {
	int N;
	printf("Enter N: ");
	scanf("%d", &N);
	int matrix[N][N];
	
	int value = 1;
	int top = 0, bottom = N - 1, left = 0, right = N - 1;
	
	while (top <= bottom && left <= right) {
		for (int i = left; i <= right; i++) {
			matrix[top][i] = value++;
		}
		top++;
		for (int i = top; i <= bottom; i++) {
			matrix[i][right] = value++;
		}
		right--;
		for (int i = right; i >= left; i--) {
			matrix[bottom][i] = value++;
		}
		bottom--;
		for (int i = bottom; i >= top; i--) {
			matrix[i][left] = value++;
		}
		left++;
	}
	
	printf("Matrix:\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
