#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    bool complete = false;
    int height = 0; 
    
    while (complete == false) {
    
        printf("Height:");
        height = GetInt();
        
        if (height >= 0 && height <= 23) {
            for (int i = 2; i <= height + 1; i++)
            {
                printf("%.*s", height - i + 1, "                                                  ");
                printf("%.*s\n", i, "######################################");
            }
        complete = true;
        }
    }
}



