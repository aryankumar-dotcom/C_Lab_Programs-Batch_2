#include <stdio.h>
int main()
{
    char name;
    int age;
    printf ("Enter your name: ");
    scanf ("%c",&name);
    printf ("Enter your age: ");
    scanf ("%d",&age);
    printf ("%c\n",name);
    printf ("%d",age);
    return 0;
}