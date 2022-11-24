//my reg no is RA2211042010032
#include <stdio.h>
int v(char a)
{
    if(a=='a'||a=='A'||a=='i'||a=='I'||a=='e'||a=='E'||a=='O'||a=='o'||a=='U'||a=='u')
    return 1;
    return 0;
}
int main()
{
    int a;
    char f[100];
    printf("Enter string : ");
    puts(f);
    for(int i=0;i<strlen(f)-1;i++){
    int b=v(f[i]),c=v(f[i+1]);
    if((b==1)&&(c==1))
    a=1;
    }
   if(a==1)
   printf("Happy");
   else
   printf("Sad");
}
