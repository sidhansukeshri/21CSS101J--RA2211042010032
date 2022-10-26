//this program prints a right triangle star pattern with 2 for loops
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=6;i++)
      {
          for(j=1;j<=i;j++)
          printf("*");
          printf("\n");
      }
}
