#include <stdio.h>
#include <stdlib.h>
/**
 * Вводим значение длины массива А
 * @return
 */
int parse_input() {
    char input[1000];
    int length;
    printf("%s", "Enter length of array A:\n");
    do {
        scanf("%s", input);
        length = atoi(input);
        if (length <= 1 || length >= 21) {
            printf("%s", "Incorrect input,enter 1 < number < 21\n");
        }
    } while (length <= 1 || length >= 21);
}
/**
 * Логика программы
 * @return
 */
int main() {
    int length = parse_input();
    int array_A[length];
    int array_B[length];
    char input[1000];
    int element;
    for (int i = 0; i < length; ++i) {
        printf("%s", "Enter value of element of array_A A with number ");
        printf("%d", i + 1);
        printf("%s", ":\n");
        do {
            scanf("%s", input);
            element = atoi(input);
            if (element <= -1000 || element >= 1000) {
                printf("%s", "Incorrect input,enter -1000 < number < 1000\n");
            }
        } while (element <= -1000 || element >= 1000);
        array_A[i] = element;
    }
    do {
        printf("%s", "Enter X that will build array B:\n");
        scanf("%s", input);
        element = atoi(input);
        if (element <= -1000 || element >= 1000) {
            printf("%s", "Incorrect input,enter -100 < number < 100\n");
        }
    } while (element <= -100 || element >= 100);
    int array_B_counter = 0;
    for (int i = 0; i < length; ++i) {
        if (array_A[i] % element == 0) {
            array_B[array_B_counter] = array_A[i];
            array_B_counter++;
        }
    }
    for (int i = 0; i < array_B_counter; ++i) {
        printf("%d", array_B[i]);         //В случае отсутствия подходящих
                                                // членов ничего не выводится
    }
    return 0;
}
