#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int b = 0; a[n];
    int n = get_int("Множина чисел: ");
    for (int i = 0; i < n; i++)
    {
        a[i] = get_int("Введіть число %i: ", (i+1));
        if ((a[i] <= 0) || (a[i] > 100))
        {
            b++;
        }
    }
    if (!(b == 0))
    {
        printf("Числа повинні бути від 1 до 100");
    }
    else
    {
        for (int i = n-1; i >= 0; i--)
        {
            printf("%i ", a[i]);
        }
    }
}