#include<cs50.h>
#include<stdio.h>
int ct(long long,int);   // the function is in bellow. Its for counting all digits are in number
int di(long long card_no)
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

int main(void)
{
    int x,last_total=0,total =0,l , count =0,dig;
    long long card_no =get_long_long("Number : ");
    long long ccn = card_no;
    count = ct(ccn,count);
    dig = di(ccn);
    printf("Count -> %d, digit -> %d\n",count,dig);

    while(true)
    {

        l=card_no%10;
        x = (card_no%100)/10;
        card_no = card_no/100;
        last_total = last_total + l;

        if((x*2)/10==0){
            total = total+(x*2);
        }
        else{
            total = total + ((2*x)/10) + ((2*x)%10);
        }
        printf("2nd num : %d, on card %lld ,last num : %d,total %d , last Total : %d \n",x,card_no,l,total,last_total);


        if(card_no==0)
        {
          if((total+last_total)%10==0){
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

int ct(long long card_no ,int count)
{
    while(card_no>0){
        card_no = card_no/10;
        count += 1;

    } return count;
}
