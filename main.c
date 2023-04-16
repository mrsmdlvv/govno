#include <stdio.h>
#include <stdlib.h>
//№21.1. Дан одномерный массив Хn. Найти количество неотрицательных
//элементов массива, попадающих в интервал [С ; D]. Напечатать все
//отрицательные элементы.
//21.2. Дан одномерный массив Yk. Найти последний элемент с нечетным
//значением. Все элементы с четными номерами заменить найденным
//значением. Удалить все отрицательные элементы.
//21.3. Дан одномерный массив Zn. Удалить все элементы массива с
//четными индексами. Дописать в конец массива сумму положительных
//элементов массива. Отсортировать исходный массив по возрастанию

int main() {
    int f, max, min, n, m, k = 0, C, D;
        printf("Press the number of program you want to initialize(№1, №2 or №3):");
        scanf("%d", &f);
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int X[n];
    printf("Input the elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &X[i]);
    }
        if (f == 1) {
            printf("Enter the interval [C;D]:");
            scanf("%d %d", &C, &D);
            for (int i = 0; i < n; ++i) {
                if ((X[i] > C) && (X[i] < D) && (X[i] > 0)) k++;
            }
            printf("\nThe quantity of positive elements equals %d and the negative elements are ", k);
            for (int i = 0; i < n; ++i) {
                if (X[i] < 0) printf("%d ", X[i]);
            }
        }
        if (f == 2) {
            for (int i = n; i >= 0; --i) {
                if (X[i] % 2 != 0) k = X[i];
                if (k != 0) break;
            }
            for (int i = 1; i < n+1; ++i) {
                X[i] = k;
                i++;
            }
            printf("\n");
            for (int s = 0; s < n; s++) {
                printf("%d ", X[s]);
            }
            printf("\nThe changed array:\n");
            for (int i = 0; i < n - 1; i++) {
                if (X[i] < 0) {
                    X[i] = X[i + 1];
                    n--;
                }
            }
            for (int s = 0; s < n; s++) {
                printf("%d ", X[s]);
            }
        }
        return 0;
    }




