#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void) 
{
    printf("O hai! How much change is owed?\n");
    float change = GetFloat();
    change = change * 100.00;
    long longChange = round(change);

    
    while (change <0) {
        printf("How much change is owed?\n");
        change = GetFloat()*100; 
        longChange = round(change);
        
    }

    long numQuarters = (longChange / 25);
    long quarterRemainder = longChange % 25;
    long numDimes =  (quarterRemainder / 10);
    long dimeRemainder = quarterRemainder % 10;
    long numNickels = (dimeRemainder / 5);
    long nickelRemainder = dimeRemainder % 5;
    long numPennies =  nickelRemainder;
    long totalNumCoins = numQuarters + numDimes + numNickels + numPennies;
    printf("%li\n", totalNumCoins);
    
    
}
