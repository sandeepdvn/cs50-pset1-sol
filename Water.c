#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int Minutes,i;
    printf("Minutes:");
    Minutes = GetInt();
    i = Minutes*12;
    printf("Bottles: %d\n",i);

}
