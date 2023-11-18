#include <stdio.h>

int main()
{
	int N;
	printf("Enter N: ");
	scanf("%d", &N);
	int array[N];
	
	for (int i = 0; i < N; i++){
		printf("Enter array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	printf("\nReverse array: ");
	
	for (int i = N-1; i >= 0; i--){
		printf("%d ", array[i]);
	}

	return 0;
}
