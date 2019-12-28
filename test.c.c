#include <stdio.h>
int main ()
{
 int num, x1;
 scanf("%d", &num);
 while (1 <= num && num <= 100)
 {
  scanf("%d", &x1);
  if (x1 == 1 || x1 + 4)
   printf("Jab\n");
  else if (x1 == 2 || x1 + 4 )
     printf("Straight Right\n");
  else if (x1 == 3 || x1 + 4)
     printf("Hook\n");
  else if (x1 == 4 || x1 + 4)
     printf("Upper Cut\n");
 num--;
}
return 0; 
}
