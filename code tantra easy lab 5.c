/*Binita is playing chess. The game will be played on a rectangular grid consisting of N rows and M columns. Initially, all the cells of the grid are uncolored.



Binita's initial score is zero. At each turn, he chooses some cell that is yet not colored and colors that cell. The score obtained in this step will be the number of neighboring colored cells of the cell that Binita colored in this step. 

Two cells are neighbors of each other if they share a side between them. The game will end when all the cells are colored. Finally, the total score obtained at the end of the game will sum up of score obtained in each turn.



Binita wants to know what maximum score he can get. Can you please help him in finding this out? */

//answer 
#include<stdio.h>
//my reg.no is RA2211042010032
main(){
int rows, coloumns, score; 
scanf("%d %d", &rows,&coloumns); 
score=((rows-1)*(coloumns-1)*2+coloumns+rows-2); 
printf("%d",score);
}
