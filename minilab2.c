#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Input your (a,b,c) :");
    scanf("%d,%d,%d",&a,&b,&c);

    float x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    float x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);

    printf("x1 = %.2f and x2 = %.2f",x1,x2);

    return 0;
}
