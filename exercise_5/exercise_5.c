/**
    Exercise - 5: Print the number of input Characters and new lines(\n)
    
    Cassio Cioni Carmo - 04/22/2024
**/

#include <stdio.h>

int main() 
{
    long numberCharacter = 0;
    long numberOfLines = 0;

    int character;

    while ((character = getchar()) != EOF)
    {
        numberCharacter++;
        if (character == '\n')
        {
            numberOfLines++;
        }
        
    }

    printf("\n%ld\n", numberCharacter);
    printf("%ld\n", numberOfLines);
    
    return 0;
}