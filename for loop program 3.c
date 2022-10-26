//this program prints a opposite side right triangle of stars 
//my reg no is RA2211042010032
#include<stdio.h>
int main(){
    int i,j,k,space=6;
    for(i=1;i<=6;i++)
      {
          for(j=1;j<space;j++)
          printf(" ");
          space-=1;
          for(k=1;k<=i;k++)
          printf("*");
          printf("\n");
      }
}
