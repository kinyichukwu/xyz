#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if ( argc != 2){
        printf("Usage: ./caesar key");
        return 1;
    }
    // else printf("Success\n");

    //Define the key
    string key = argv[1];

    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {

        }
    }
    printf("success\n%s\n", key);

    string plainText = get_string("plaintext: ");

    int k = atoi(key);
    printf("ciphertext: ");

    //obtain ciphertext
    for (int i = 0; i < strlen(plainText); i++)
    {
        if (isupper(plainText[i]))
        {
            printf("%c", (((plainText[i] - 65) + k) % 26) + 65);
        }
        else if(islower(plainText[i]))
        {
            printf("%c", (((plainText[i] - 97) + k) % 26) + 97);
        }
        else
        {
            printf("%c", plainText[i]);
        }
    }
    printf("\n");
}