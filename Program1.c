#include <stdio.h>
int main ()
{
    int n,i,num1;
    printf ("Enter the number of values you want to input: ");
    scanf ("%d",&n);

    int numarr[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter number %d: ",i+1);
        scanf ("%d",&num1);
        numarr[i] = num1;
    }
    printf ("The array in reverse order is: ");
    for (i=n-1;i>=0;i--)
    {
        printf (" %d",numarr[i]);
    }
    return 0;
}
