//my reg no is RA2211042010032
#include <stdio.h>
int main()
{
    int N,M,K;
    printf("N: M: K:\n");
    scanf("%d %d %d", &N, &M, &K);

    if ((N+K)<=M )
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
