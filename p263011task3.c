#include <stdio.h>

int main() {
    int x,count=2;
do{
printf("Enter the pin : ");
scanf("%d",&x);
if (x == 4321){
printf("Access granted");
return 0;
}
else {
printf("Try again %d try(s) left\n",count);
}
}
while(count--);
printf("Contact your bank the card has been blocked");

return 0;
}


