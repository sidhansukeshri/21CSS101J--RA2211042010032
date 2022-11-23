//my reg no is RA2211042010032
#include <stdio.h>
void main()
{
    int number1, number2, max,i,lcm,c;
    printf("Enter two positive integers: ");
    scanf("%d %d", &number1, &number2);
    max = (number1 > number2) ? number1 : number2;
    for(i=1; i <= number1 && i <= max; ++i)
    {
        if(number1%i==0 && number2%i==0)
            c= i;
    }
        lcm=(number1*number2)/c;
        printf("L.C.M of %d and %d is %d", number1, number2, lcm);
}
