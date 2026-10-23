#include <stdio.h>
int main(){
int ball,runs,dotball=0,boundary=0,total=0;
for ( ball=1;ball<=6;ball++)
{
printf("Enter runs on each ball from 0 to 6 : ");
scanf("%d",&runs);
if (runs < 0 || runs > 6){
printf("Invalid runs ");
return 0;
}
if(runs==4 || runs ==6)
boundary++;
if (runs ==0)
dotball++;
total = runs + total;
}
printf("Total runs are %d\nBoundaries hit are %d\nDot balls in this over are %d\n",total,boundary,dotball);
return 0;
}