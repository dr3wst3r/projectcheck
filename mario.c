#include <cs50.h>
#include <stdio.h>


int main(void)    
{
    //Get valid input
    int n;
    do
    {
        n = get_int("Give me an number between 1-8");
    }
    while ( n < 1 || n > 8);
    
    //Outer row loop
    for (int i = 0; i < n; i++)
    {
        //inner " " loop
        for ( int count = 0; n- (i+ 1)> count; count++)
        {
            printf(" ");
        }
        //Inner # loop
        for ( int j = 0; j <= i; j++)
        {
            printf("#");
        }
       printf("\n");

      }
    
}


