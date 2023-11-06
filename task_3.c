#include <stdio.h>

int main() {
    int num; 
    int count = 0;
    
    printf("Введите положительное число: ");
    scanf("%d", &num);
    
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
        printf("Количество единиц в двоичном представлении равно %d", count);
    return 0;
}
