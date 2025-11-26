#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <stdlib.h>
#define N 10

void task1();
float func(float x);
void task2();
void dz();

int main() {
    system("chcp 1251");
    task1();
    task2();
    dz();
}
float func(float x) {
    return x * x * x - 4 * x * x + 2;
}

void task1() {
    printf("Задание 1\n");
    float A[N], B[N];
    float temp, summ = 0;
    for (int i = 0; i < N; i++)

    {
        printf("a[%d] = ", i + 1);

        scanf("%f", &temp);

        A[i] = temp;
        summ += A[i];

    }
    for (int i = 0; i < N; i++) {
        B[i] = -A[i];
    }
    printf("|Индекс|Исходное значение|Новое значение|");
    for (int i = 0; i < N; i++) {
        printf("\n|%-6d|%17.2f|%14.2f|", i, A[i], B[i]);
    }
    printf("\nСреднее арифметичское элементов массива: %.2f\n", summ / N);
}

void task2() {
    printf("Задание 2\n");
    float A[100];
    float x = 1;
    float sum1 = 0, sum2 = 0;
    int cou1 = 0, cou2 = 0;
    for (int i = 0; i < 100; i++) {
        A[i] = func(x);
        x += 0.2;
        if (A[i] > 0) {
            sum1 += A[i];
            cou1 += 1;
        }
        else {
            sum2 += A[i];
            cou2 += 1;
        }
    }
    float sr = sum1 / cou1;
    printf("Имя массива: A,\nнакопленное значение для положительных элементов: %.2f,\nнакопленное значение отрицательных элементов: %.2f,\nчисло положительных элементов %d,\nчисло отрицательных элементов: %d,\nсреднее значение положительных: %.2f", sum1, sum2, cou1, cou2, sr);
}
void dz() {
    printf("\nДомашнее задание\n");
    int n;
    float A[100];
    printf("Введите размер списка: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &A[i]);
    }
    int co = 0;
    float summ = 0, sr;
    for (int i = 2;i < n;i += 2) {
        summ += A[i];
        co++;
    }
    sr = summ / co;
    printf("Среднее значение элементов, порядковые номера которых чётные: %.2f", sr);

}
