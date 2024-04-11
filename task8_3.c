// Написать только одну функцию, которая находит максимальный элемент в
// массиве. Всю программу загружать не надо.
// Прототип функции: int find_max_array(int size, int a[])
// #include <stdio.h>
// #include <time.h>
// #include <locale.h>
// #include <stdlib.h>

// void init_rnd_array(int size, int a[])
// {
    
//     for (int i = 0; i<size; i++){
//         a[i] = rand()%1000;
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

int find_max_array(int size, int a[])
{
    int tmp = a[0];
    for (int i = 1; i<size; i++)
    {
        if (a[i]>tmp) tmp = a[i];
    }
    return tmp;
}

// int main(void)
// {
//     setlocale(LC_ALL, "Rus");
//     int n =30;
//     int *a;
//     a = malloc(n*sizeof(int));
//     srand(time(NULL));
//     init_rnd_array(n, a);
//     print_array(n, a);
//     printf("Максимальный элемент массива: %d", find_max_array(n, a));
//     return 0;
// }