// Написать только одну функцию, которая ставит в начало массива все четные
// элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
// между собой. Строго согласно прототипу:
// void sort_even_odd(int n, int a[])

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

void sort_even_odd(int n, int a[])
{
    int tmp[n];
    int j = 0;
    for (int i=0; i<n; i++)
    {
            if (a[i]%2 == 0)
            tmp[j++] = a[i];
    }
    for (int i = 0; i<n; i++)
    {
        if (a[i]%2 != 0)
        tmp[j++] = a[i];
    }
    for (int i = 0; i<n; i++)
    a[i] = tmp[i];
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
//    sort_even_odd(n, a);
//    print_array(n, a);
//     return 0;
// }