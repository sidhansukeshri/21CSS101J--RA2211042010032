//my reg no is RA2211042010032
#include <stdio.h>
#include<string.h>
int main() {
   int count=0;
    char sentence[100]="Many a man has tried but few men have succeeded.";
    for(int i=0;i<100;i++)
    {
        if(sentence[i]==97||sentence[i]==65)
        count++;
    }
    printf("number of a=%d ",count);
}
