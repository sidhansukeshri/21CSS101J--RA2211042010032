#include<stdio.h> 
//my reg no.is RA2211042010032 
int main(){
int amount_given,bill_amount, quotient, remain;
scanf("%d %d",&amount_given, &bill_amount); 
quotient=amount_given/bill_amount; 
remain=amount_given%bill_amount; 
printf("%d\n%d", quotient, remain);
}
