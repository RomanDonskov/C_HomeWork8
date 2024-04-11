// Определить количество положительных элементов квадратной матрицы,
// превышающих по величине среднее арифметическое всех элементов главной
// диагонали. Реализовать функцию среднее арифметическое главной
// диагонали.
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

void init_rnd_array(int size, int a[size][size])
{
    
    for (int i = 0; i<size; i++)
    {
        for (int j = 0; j<size; j++)
        {
            a[i][j] = rand()%100;
        }
    }   
}

void print_array(int size, int a[size][size])
{
    for (int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    
}

float ever_main_diag(int size, int a[size][size])
{
    int sum = 0;
    
    for (int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            if (i == j)
            {
                sum+=a[i][j];
            }
        }
    }
    return (float)sum/size;
}

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int n = 5;
    int count = 0;
    int a[n][n];
    float ever;
    
    srand(time(NULL));
    init_rnd_array(n, a);
    print_array(n, a);
    
    ever = ever_main_diag(n, a);
    printf("\nСреднее арифметическое главной диагонали: %.3f \n", ever);
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (a[i][j]>0 && a[i][j]>ever) count++;
        }
    }
    
    printf("Количество положительных элементов, > среднего арифметического главной диагонали: \n%d", count);
    return 0;
}