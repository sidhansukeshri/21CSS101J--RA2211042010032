//my reg no is RA2211042010032
#include <stdio.h>
int main()
{
    int l,r;
    printf("Enter l & r: ");
    scanf("%d %d",&l,&r);
    for(int i=l;i>=r;i++)
    {
        int d=i%10;
        if(d==2||d==3||d==9)
        printf("%d",i);
    }
}
