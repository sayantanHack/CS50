#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int x,ten,n=10,total=0;
    long long isbn = get_long_long("ISBN: ");      // geting a big value for ISBN number 
    ten = isbn%10;
    while(true){
        isbn = isbn/10;
        x = isbn%10;
        n--;
        total = total + n*x;
        if (n== 1){
            if(ten == (total%11)){
            printf("YES\n");
            break;
            }
            else{
            printf("NO\n");
            break;
             }
        }
    }

}
