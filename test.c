#include <stdio.h>

int main()
{
    char a = 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111;
    char b = 0;
    char e = 'E';
    float c = 3.1414141;
    double d = 3.1414141;
    unsigned int u;
    printf("Hi my name is Eisuke and for some reason I chose these variables: %f, %lf, %c, %c\n", c, d, e, a);
    printf("Really interesting that because char a overflowed, the output became some random symbol.\n");
    if (a)
        printf("%c\n",a); //a is true
    if (b)
        printf("%c\n",b); //b is false
    printf(u + "\n"); //Because I tried printing an unsigned variable, the console prints Segmentation Fault and I can't continue printing to the console
    return 0;
}