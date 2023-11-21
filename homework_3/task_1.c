#include <stdio.h>

int main() {
    int number; 
    int newByte; 
    
    printf("Введите число: ");
    scanf("%d", &number);
    
    printf("Введите новое число для третьего байта: ");
    scanf("%d", &newByte);
    
    printf("\nИсходное число: ");
    for (int i = 31; i >= 0; i--) {
        if (i == 23 || i == 15 || i == 7) {
            printf(" ");
        }
        int b_num = (number >> i) & 1;
        printf("%d", b_num);
    }

    char *ptr = (char*)&number;
    
    ptr += 2;
    *ptr = (char)newByte;
    
    printf("\nИзмененное число: ");
    for (int i = 31; i >= 0; i--) {
        if (i == 23 || i == 15 || i == 7) {
            printf(" ");
        }
        int b_num = (number >> i) & 1;
        printf("%d", b_num);
    }
    printf("\nПолученное число: %d", number);

    return 0;
}
