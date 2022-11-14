/*Tina's brother gave her a friendly task of calculating the number of squares in a board that has n*n squares of dimensions 1cm *1cm each.

Help her to find the number of total squares including all small and big ones.*/
#include<stdio.h>
//my Reg no. RA2211042010032
int main(){ 
int n;
scanf("%d", &n);
n=(n*(n+1)*(2*n+1))/6;
printf("%d",n);
}
