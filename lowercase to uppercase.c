//my reg no is RA2211042010032
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
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("\n\nString in Uppercase: %s",str);
}
