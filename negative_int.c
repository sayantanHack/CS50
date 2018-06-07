#include<stdio.h>
#include<cs50.h>

int Get_negint(void);

int main(void)
{
   int i = Get_negint();
   printf("%i is an negative integer.\n",i);

}

int Get_negint(void)
   {
       int n;
       do
       {
           n = get_int("n is : ");
       }
       while(n > 0);
           return n;

   }
