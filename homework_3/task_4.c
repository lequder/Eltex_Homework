#include <stdio.h>

int main() {
    char str[100];
    char sub[100];
    char* ptr;
    int j = 0;
    
    printf("Введите строку: ");
    scanf("%s", str);

    printf("Введите подстроку: ");
    scanf("%s", sub);

    for (int i = 0; str[i] != '\0'; i++) {
        while (sub[j] != '\0' && str[i + j] != '\0' && str[i + j] == sub[j]) {
            j++;
        }
        if (sub[j] == '\0') {
           ptr = &str[i];
           break;
        }
    }

    if (sub[j] == '\0') {
        printf("Подстрока найдена. Начинается с позиции %ld", ptr - str);
    } else {
        ptr = NULL;
        printf("Подстрока не найдена.\n");
    }

    return 0;
}
