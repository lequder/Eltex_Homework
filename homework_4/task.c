#include <stdio.h>
#include <string.h>

struct abonent {
    char name[10];
    char second_name[10];
    char tel[10];
};

int main() {
    struct abonent caller[100];
    int option, count = 0;

    do {
        printf("\n1) Добавить абонента");
        printf("\n2) Удалить абонента");
        printf("\n3) Поиск абонентов по имени");
        printf("\n4) Вывод всех записей");
        printf("\n5) Выход");
        printf("\nВыберите пункт меню: ");
        scanf("%d", &option);

        switch (option) {
          case 1:
              if (count >= 100) {
                  printf("\nАбонентский справочник переполнен!");
              } else {
                  printf("\nВведите имя: ");
                  scanf("%s", caller[count].name);
                  printf("\nВведите фамилию: ");
                  scanf("%s", caller[count].second_name);
                  printf("\nВведите номер телефона: ");
                  scanf("%s", caller[count].tel);
                  count++;
              }
              break;
            
          case 2:
            int index;
              printf("\nВведите индекс удаляемого абонента (0-%d): ", count-1);
              scanf("%d", &index);
              if (index >= 0 && index < count) {
                memset(&caller[index], 0, sizeof(struct abonent));
                printf("\nАбонент успешно удален!");
              } else {
                printf("\nНеверный индекс абонента!");
              }
              break;

          case 3:
              printf("\nВведите имя абонента: ");
              char search_name[10];
              scanf("%s", search_name);
              printf("\nРезультаты поиска:");
              for (int i = 0; i < count; i++) {
                if (strcmp(caller[i].name, search_name) == 0) {
                  printf("\nИмя: %s", caller[i].name);
                  printf("\nФамилия: %s", caller[i].second_name);
                  printf("\nТелефон: %s", caller[i].tel);
                }
              }
              break;
            
          case 4:
            printf("\nСписок всех записей:");
            printf("\n-----");
            for (int i = 0; i < count; i++) {
              //if (strlen(caller[i].name) > 0) {
              if (caller[i].name != '\0') {
                printf("\nИмя: %s", caller[i].name);
                printf("\nФамилия: %s", caller[i].second_name);
                printf("\nТелефон: %s", caller[i].tel);
                printf("\n-----");
                }
            }
            break;

          case 5:
            printf("\nПрограмма завершена.");
            break;

          default:
            printf("\nНеверный пункт меню.");
            break;
        }
    } while (option != 5);

    return 0;
}
