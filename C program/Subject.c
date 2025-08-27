#include <stdio.h>
int main()
{
    int maths,physics,chemistry,english,hindi;
    printf ("Enter marks for maths: ");
    scanf ("%d",&maths);
    printf ("Enter marks for physics: ");
    scanf("%d",&physics);
    printf ("Enter marks for chemistry: ");
    scanf ("%d",&chemistry);
    printf ("Enter marks for english: ");
    scanf ("%d",&english);
    printf ("Enter marks for hindi: ");
    scanf ("%d",&hindi);
    
    int percentage;
    percentage=((maths+physics+chemistry+english+hindi)/500.0)*100.0;
    printf ("%d,Your percentage is: ");
    
    if(percentage>=85)
    {
        printf ("Grade O");
    }
    else if (percentage>=75)
    {
        printf ("Grade A");
    }
    else if (percentage>=60)
    {
        printf ("Grade B");
    }
    else if (percentage>=40)
    {
        printf ("Grade C");
    }
    else if (percentage>=35)
    {
        printf ("Grade D");
    }
    else if (percentage<35)
    {
        printf ("Grade F");
    }
    return 0;
}