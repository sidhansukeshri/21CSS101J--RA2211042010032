//this program finds out the greatest among three numbers and checks if the greatest numbers is postive or negative 

#include<stdio.h>
void main(){
    int a,b,c,max;
    printf("enter the three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greater than %d and %d !",a,b,c);
        max=a;
    }
    else if(b>a && b>c)
    {
        printf("%d is greater than %d and %d !",b,a,c);
        max=b;
    }
    else if(c>a && c>b)
    {
        printf("%d is greater than %d and %d !",c,a,b);
        max=c;
    }
    if(max>0)
    {
        printf("\n%d is positive!",max);
    }
    else 
    {
        printf("\n%d is negative!",max);
    }
}
