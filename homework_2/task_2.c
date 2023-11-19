#include <stdio.h>

int main()
{
	int N;
	printf("Enter N: ");
	scanf("%d", &N);
	int array[N];
	int temp;
	int start = 0;
	int end = N - 1;
	
	for (int i = 0; i < N; i++){
		printf("Enter array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	while (start < end) {
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
	
	printf("\nReverse array: ");
	
	for (int i = 0; i < N; i++){
		printf("%d ", array[i]);
	}

	return 0;
}
