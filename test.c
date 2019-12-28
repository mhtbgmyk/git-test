#include <stdio.h>
int main()
{
	int x, y, z;
	scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int a;
    int b;
    a = x-y;
    if (z > a)
    {
        b = z-a;
        printf("%d", b);
	}
	else
	{
		printf("The volume of bottle b should be more than what is left in bottle a. ");
	}
}




