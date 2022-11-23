#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter String : ");
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    }
    printf("String in Lowercase: %s",str);
}
