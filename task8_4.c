// Написать только одну логическую функцию, которая определяет, верно ли, что
// среди элементов массива есть два одинаковых. Если ответ «да», функция
// возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
// int is_two_same(int size, int a[]);
// #include <stdio.h>
// #include <time.h>
// #include <locale.h>
// #include <stdlib.h>

// void init_rnd_array(int size, int a[])
// {
    
//     for (int i = 0; i<size; i++){
//         a[i] = rand()%100;
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

int is_two_same(int size, int a[])
{
    int fl = 0;
    for (int i = 0; i<size-1; i++)
    {
        for (int j = i+1; j<size; j++)
        {
            if (a[i] == a[j]) 
            {
                fl = 1;
                break;
            }
        }
        if (fl) break;
        else continue;
    }    
    return fl;
}

// int main(void)
// {
//     setlocale(LC_ALL, "Rus");
//     int n =10;
//     int *a;
//     a = malloc(n*sizeof(int));
//     srand(time(NULL));
//     init_rnd_array(n, a);
//     print_array(n, a);
//     if (is_two_same(n,a))
//     printf("YES");
//     else 
//     printf("NO");
//     printf("\n%d", is_two_same(n,a));
//     return 0;
// }