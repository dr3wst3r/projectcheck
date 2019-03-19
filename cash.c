#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{    
    //Get input
    float owed;
    do
    {
        owed = get_float("How much change is owed?");
    }
    while (owed <= 0);
    
    // Float to int
    int iowed = round(owed * 100);
    printf("%i\n", iowed);
    
    //declaration
    int denom [] = {25,10,5,1};
    int coins = 0;
        
    //iterativly calculate # of coins using %
    for (int i = 0; i < 4; i++)
            
        {       
            coins += round(iowed / denom[i]);
            iowed = iowed % denom[i]; 
        }   
        
    printf("%i\n", coins);
}
