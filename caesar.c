#include<stdio.h>
#include<cs50.h>
#include<string.h>        
#include <ctype.h>        //this header is for upper lower or alphabet checkings

int main(int argc, string argv[])
{
    int key;
    if(argc==2)
    {
       string  num = argv[1];
        key = atoi(num);                        //Taking the key value from the CLi arg as CLI ARG is string type(basically char pointer)atoi helps to make it int.
        //printf("key is %d\n", key);
    }
    string text = get_string("plaintext: ");
    for(int i=0,len = strlen(text);i < len;i++)
    {
        //printf("The text is : %c\n",text[i]);
        if(isalpha(text[i]))
        {
            if(isupper(text[i]))
            {
                text[i]=((text[i]-65+ key)%26)+65;
                //printf("cyfer is %c\n",text[i]);
            }
            if(islower(text[i]))
            {
                text[i]=((text[i]-97+key)%26)+97;
                //printf("cyfer is %c\n",text[i]);
            }
        }
    }
    printf("ciphertext: %s\n",text);
}
