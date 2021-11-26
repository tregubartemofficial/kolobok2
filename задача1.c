#include <stdio.h>
int main()
{
  int c; n; d;
  int a[100];
  int b[100];
  printf("Кількість чисел у масиві\n");
  scanf("%d", &n);

  while (n < 101 && n>0)
  {

  printf("Введіть масив елементів\n");
  for (c = 0; c < n ; c++)
  scanf("%d", &a[c]);
  // Копіювання елементів в масив

  for (c = n - 1, d = 0; c >= 0; c--, d++)
  b[d] = a[c];

  for (c = 0; c < n; c++)
  a[c] = b[c];
  printf("Оберненний масив:\n");

  for (c = 0; c < n; c++)
  printf("%d ", a[c]);

  return 0;
  }

}
