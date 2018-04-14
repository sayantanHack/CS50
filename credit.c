#include<cs50.h>
#include<stdio.h>
int ct(long long,int);   // the function is in bellow. Its for counting all digits are in number

int di(long long card_no)    // this  function is all about taking the first two digits of number 
{
    int r,m;
    while(card_no >0){
    card_no=card_no/10;
    if(card_no>0){
        r = card_no;
    }
    if(card_no >=10){
        m=card_no%10;
        }
    }
    return ((r*10)+m);
}

int main(void)                                  //main function
{
    int x,last_total=0,total =0,l , count =0,dig;     // count and dig(digint) are for taking two function into it
    long long card_no =get_long_long("Number : ");
    long long ccn = card_no;                                  
    count = ct(ccn,count);
    dig = di(ccn);
    printf("Count -> %d, digit -> %d\n",count,dig);      

    while(true)                // the loop is going to infinite way
    {

        l=card_no%10;
        x = (card_no%100)/10;       //taking all the alternative numbers from the second last digit of the cc num
        card_no = card_no/100;
        last_total = last_total + l;    

        if((x*2)/10==0){
            total = total+(x*2);         // multiply by 2 then add every digit to other non multiplied digit
        }
        else{
            total = total + ((2*x)/10) + ((2*x)%10);
        }
        printf("2nd num : %d, on card %lld ,last num : %d,total %d , last Total : %d \n",x,card_no,l,total,last_total);


        if(card_no==0)
        {
          if((total+last_total)%10==0)      // Is the total checksum is divisible by 10 without reminder??
          {
              printf("VALID \n");
              if((dig==34 ||dig==37)&& count==15)
              {
                  printf("Amex\n");
              }
              else if((dig==51||dig==52||dig==53||dig==54||dig==55)&& count==16)
              {
                  printf("MasterCard\n");
               }
              else if(dig==4&&(count==13 || count==16))
              {
                  printf("Visa\n");
              } break;

          }
          else{
              printf("INVALID\n");
              break;
          }
        }

    }
}

int ct(long long card_no ,int count)          // the function about counting
{
    while(card_no>0){
        card_no = card_no/10;
        count += 1;

    } return count;
}
