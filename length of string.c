//my reg no is RA2211042010032
#include <stdio.h>
int main() {
    char s[] = "my reg no is RA2211042010032";
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    printf("Length of the string: %d", i);
}
