//my reg no is RA2211042010032
#include <stdio.h>
int main()
{
    int X, Y;

    scanf("%d %d", &X, &Y);
    int *ptr1 = &X;
    int *ptr2 = &Y;

    if (*ptr1>*ptr2)
    {
        printf("First\n");
    }
    if (*ptr1 == *ptr2)
    {
        printf("Any\n");
    }
    else
    {
        printf("Second\n");
    }
}
