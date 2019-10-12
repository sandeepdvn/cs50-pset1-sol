#include <stdio.h>
#include <cs50.h>
int main (void)
{
int n;
    do
    {
        //printf("Height: ");
        cout<<"Height:";
        n = get_int();
    }
 	while (n<0 || n>23);
 	  for (int i=0; i<n; i++)
       {
         for (int j=n-i-1; j>0; j--){
        // printf(" ");
            cout<<" ";
         }
         for (int k=0; k<i+2; k++){
         //printf("#");
             cout<<" ";
       }
        // printf("\n")   ;
        cout<<endl;
      }
}
