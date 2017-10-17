#include <stdio.h>
#include <cs50.h>
int main (void)
{
int n;
    do
    {
        printf("Height: ");
        n = get_int();

    }
 	while (n<0 || n>23);
 	for (int i=0; i<n; i++)
 {


       for (int j=n-i-1; j>0; j--){
       printf(" ");
       }


       for (int k=-2; k<i; k++){
       printf("#");
       }

       printf("\n")   ;
   }
}
