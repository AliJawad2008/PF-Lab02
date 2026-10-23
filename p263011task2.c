#include <stdio.h>
int main(){
int month=0,saving,ms,price,total;
printf("Enter savings  monthly saving  and laptop price: ");
scanf("%d%d%d",&saving,&ms,&price);
printf("Laptop price : %d\nCurrent savings : %d\nMonthly savings : %d\n",price,saving,ms);
total = ms + saving;
while (saving < price )
{
if ( total < price)

month = month + 1;
saving = saving + ms;
printf("Month %d : savings = %d\n",month,saving);
}

printf("She can buy laptop after %d months\n",month);

return 0;
}