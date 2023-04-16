#include <stdio.h>
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
    int f, n, k = 0;
        printf("Press the number of program you want to initialize(1, 2 or 3):");
        scanf("%d", &f);
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int X[n];
    printf("\nInput the elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &X[i]);
    }
        if (f == 1) {
            int C, D;
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
            for (int i = 0; i < n; i++) {
                printf("%d ", X[i]);
            }
            printf("\nThe changed array:\n");

            for (int i = 0; i < n - 1; i++) {
                if (X[i] < 0) {
                    for (int j = i; j < n - 1; j++) {
                        X[j] = X[j + 1];
                    }
                    n--;
                    i--;
                }

            }
            n--;
            for (int i = 0; i < n; i++) {
                printf("%d ", X[i]);
            }
        }
        if (f == 3) {
            int id = 0;
            while (id < n) {
                for (int i = id; i <= n - 1; i++) {
                    X[i] = X[i + 1];
                }
                n--;
                id++;
            }
            printf("\nArray without even id\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", X[i]);
            }
            int sum=0;
            int g;
            for( int i =0; i<=n-1; i++) {
                if(X[i]>0) sum= sum + X[i];
            }
            n=n+1;
            X[n-1]=sum;
            printf("\nArray with sum\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", X[i]);
            }
            for( int i=0; i<n-1;i++){
                for(int j=0; j<n-i-1;j++){
                    if(X[j]>X[j+1]){
                        g=X[j];
                        X[j]=X[j+1];
                        X[j+1]=g;
                    }
                }
            }
            printf("\nSorted array\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", X[i]);
            }
        }

        return 0;
    }





