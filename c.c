#include <stdio.h>
int max (int a ,int b ,int c ,int d);
int numtype(int max);
int main(){
int num1,num2,num3,num4;
printf("Enter 4 numbers : ");
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

int maximum = max ( num1,num2,num3,num4);
printf("Max number %d\n",maximum);
int type = numtype(maximum);
if ( type == 0){
    printf("Type = Even");
}
else {
    printf("Type = Odd");
}
return 0;
}
 int max (int a ,int b ,int c ,int d){
if (a > b && a > c && a > d){
    return a;
//printf("Max number %d\n",a);
}
if (b > a && b > c && b > d){
    return b;
//printf("Max number %d\n",b);
}
if (c > a && c > b && c > d){
    return c;
//printf("Max number %d\n",c);
}
if (d > a && d > b && d > c){
    return d;
//printf("Max number %d\n",d);
}
return 0;
}
 int numtype (int max){
if (max % 2==0){
    max = 0;

}
    else {
   max=1;
    
    }
    
    return max;
}
