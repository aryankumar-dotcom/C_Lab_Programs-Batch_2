#include <stdio.h>
int main()
{
    int vote;
    int x=0,y=0,z=0;
    printf ("Enter 1 for x\nEnter 2 for y\nEntre 3 for z\nVote: ");
    scanf ("%d",&vote);
    switch (vote)
    {
        case 1:
            x=x+1;
            break;
        case 2:
            y=y+1;
            break;
        case 3:
            z=z+1;
            break;
    }
    if ((x>=y)&&(x>=z))
    {
        printf ("x won");
    }
    else if ((y>=x)&&(y>=z))
    {
        printf ("y won");
    }
    else
    {
        printf ("z won");
    }
    return 0;
}
