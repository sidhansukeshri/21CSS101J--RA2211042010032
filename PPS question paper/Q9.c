//my reg no is RA2211042010032
#include <stdio.h>
int main()
{
    int n,c=0,d=0;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i]%j==0)
            {
            c++;
            }
        }
        if(c==1)
        {
            d++;
        }
        c=0;
    }
    printf("Prime Number Count = %d",d);
}
