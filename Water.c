#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int min,i;
    printf("Minutes:");
    min = GetInt();
    i = min*12;
    printf("Bottles: %d\n",i);
    
    return 0;
}
