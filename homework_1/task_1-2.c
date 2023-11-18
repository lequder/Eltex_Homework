#include <stdio.h>

int main()
{
    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--) {
        int b_num = (num >> i) & 1;   
        printf("%d", b_num);
    }
    return 0;
}
