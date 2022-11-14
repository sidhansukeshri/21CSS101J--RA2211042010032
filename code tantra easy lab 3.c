/*Ramesh is working in an engineering college hostel as a Mess supervisor. There are different messes are available based on the years. Every day students count is varying in all the hostels due to continuous holidays.Since Ramesh is in charge of the cooking team, he had trouble with calculating the quantity of food that needs to be prepared because of the varying student count. Even if a small quantity of food is prepared by the cooking team, it should be divided equally among the number of Mess. Ramesh needs an automated software to identify the amount of food available (in number of packets ) and Mess count. 



Can you help him to divide the food equally and also calculating the remaining quantity of food that will be available after sharing the food equally ?*/

#include<stdio.h>
// my Reg no.RA2211042010032
int main(){
int avl,mess, food, remain;
scanf("%d %d",&avl,&mess); 
food=avl/mess;
remain=av1%mess;
printf("%d %d", food, remain);
}
