// Написать только одну функцию, которая сортирует массив по возрастанию.
// Необходимо реализовать только одну функцию, всю программу составлять не
// надо.
// Строго согласно прототипу. Имя функции и все аргументы должны быть:
// void sort_array(int size, int a[])
// Всю программу загружать не надо, только одну эту функцию. Можно просто
// закомментировать текст всей программы, кроме данной функции.

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

void sort_array(int size, int a[])
{
    int tmp;
    for (int i=0; i<size-1; i++)
        for (int j = i+1; j < size; j++)
        {
            if (a[i]>a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
}

// int main(void)
// {
//     int n = 10;
//     int *a;
//     a = malloc(n*sizeof(int));
//     srand(time(NULL));
//     init_rnd_array(n, a);
//     print_array(n, a);
//    sort_array(n, a);
//    print_array(n, a);
//     return 0;
// }