#include <stdio.h>

int main() {
    int num, bit, newNum;
    
    printf("Введите положительное целое число: ");
    scanf("%d", &num);
    
    printf("Введите новое значение третьего бита (0 или 1): ");
    scanf("%d", &bit);
    
    if (bit == 0) {
        newNum = num & 0b11111011;
    } else {
        newNum = num | 0b00000100;
    }
    
    printf("Новое число:%d", newNum);
    
    return 0;
}
