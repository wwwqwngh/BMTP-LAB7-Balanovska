#include <stdio.h>

int main() {
    int arr[10], max, maxIndex = 0, temp;

    // Введення масиву
    printf("Enter 10 natural numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Знаходження найбільшого елемента
    max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    // Перевірка, чи найбільший елемент уже на першій позиції
    if (maxIndex == 0) {
        printf("The first element is already the largest.\n");
    } else {
        // Обмін першого і найбільшого елемента
        temp = arr[0];
        arr[0] = arr[maxIndex];
        arr[maxIndex] = temp;

        printf("Updated array:\n");  // Виведення
        for (int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
