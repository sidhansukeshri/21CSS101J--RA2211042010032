//my reg no is RA2211042010032
#include <stdio.h>
int swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("%d %d ",a,b);
}
int main()
{
    int n=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i+=2)
    {
        swap(a[i],a[i+1]);
    }
}
