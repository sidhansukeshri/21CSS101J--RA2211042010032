/*Nancy bought apples in a fruit shop. The shop keeper specified the bill amount. Nancy also given some amount to the shop keeper for paying the bill. But she likes to know the quotient and remainder after dividing the amount given by her by the bill amount specified by shop keeper. 



Can you help Nancy in finding it?*/

#include<stdio.h> 
//my reg no.is RA2211042010032 
int main(){
int amount_given,bill_amount, quotient, remain;
scanf("%d %d",&amount_given, &bill_amount); 
quotient=amount_given/bill_amount; 
remain=amount_given%bill_amount; 
printf("%d\n%d", quotient, remain);
}
