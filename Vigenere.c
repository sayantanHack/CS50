#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf ("usage : ./caesar + key \n");
        return 1;
    }
    string key= argv[1];
     int keylen = strlen(key);

     for(int c=0;c<keylen;c++)
        {
            if(!isalpha(key[c]))
            {
                 printf ("usage : ./caesar + key \n");
                return 1;
            }
        }

    string ptext = get_string("plaintext : ");   //getting the plain text

    int textlen = strlen(ptext);            //length of the key and the plain text


    for(int i=0,j=0; i<textlen; i++)
    {
        if(isalpha(ptext[i]))
        {
            if(isupper(ptext[i]))
            {
                ptext[i] = ( ptext[i] - 65 + tolower(key[j]) - 'a')% 26 + 65;  // The capital l
            }
            if(islower(ptext[i]))
            {
                ptext[i] = ( ptext[i] - 97 + tolower(key[j]) - 'a')% 26 + 97;
            }
            j = (j + 1)% keylen;
        }
    }
    printf("ciphertext: %s\n",ptext);

}
