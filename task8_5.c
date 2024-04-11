// Составить функцию, которая меняет в массиве минимальный и максимальный
// элемент местами. Прототип функции
// void change_max_min(int size, int a[])
// #include <stdio.h>
// #include <time.h>
// #include <locale.h>
// #include <stdlib.h>

// void init_rnd_array(int size, int a[])
// {
    
//     for (int i = 0; i<size; i++){
//         a[i] = rand()%10;
//     }
// }

// void print_array(int size, int a[])
// {
//     for (int i = 0; i<size; i++)
//     {
//         printf("%4d", a[i]);
//     }
//     printf("\n");
// }

void change_max_min(int size, int a[])
{
    int max, min;
    max = a[0];
    min = a[1];
    for (int i = 0; i < size; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
        else if (a[i]<min)
        {
            min = a[i];
        }
    }
    
    for(int i = 0; i < size; i++)
    {
        if (a[i] == max) a[i] = min;
        else if (a[i] == min) a[i] = max;
    }
}

// int main(void)
// {
//     setlocale(LC_ALL, "Rus");
//     int n = 10;
//     int *a;
//     a = malloc(n*sizeof(int));
//     srand(time(NULL));
//     init_rnd_array(n, a);
//     print_array(n, a);
//     change_max_min(n, a);
//     print_array(n, a);
//     return 0;
// }