//my reg no is RA2211042010032
#include <stdio.h>
void s(int a)
{
    if(a%2==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
void main()
{
    int b=0;
    printf("Enter number of chocolate : ");
    scanf("%d",&b);
    s(b);
}
