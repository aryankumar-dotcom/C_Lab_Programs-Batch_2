#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter the coefficient of x^2: ");
    scanf ("%d",&a);
    printf ("Enter the coefficient of x: ");
    scanf ("%d",&b);
    printf ("Enter the constant: ");
    scanf ("%d",&c);
    int d;
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        printf ("The roots are Real and Distinct");
    }
    else if (d==0)
    {
        printf ("The roots are Real and Equal");
    }
    else if (d<0)
    {
        printf ("The roots are Imaginary");
    }
    return 0;
}