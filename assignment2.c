#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;

    printf("Input your coefficient(a,b,c) :");
    scanf("%d,%d,%d",&a,&b,&c);

    switch(a){
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }

    if (a!=0 && b>0) printf("+");

    switch(b){
        case 1: printf("x"); break;
        case 0: break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }

    if (b!=0 && c>0) printf("+");

    if (c!=0) printf("%d\n",c);

    float x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    float x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);

    float neg=b*b-4*a*c;

    if (neg<0) printf("No solutions");
    else if(a==0) printf("No solutions");
    else if(a==0 && b==0) printf("No solutions");
    else

    printf("x1 = %.2f and x2 = %.2f",x1,x2);

    return 0;
}
