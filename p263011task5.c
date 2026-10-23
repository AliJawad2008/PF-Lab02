#include <stdio.h>
int main(){
int samosa,tea,sandwich;
int choice,bill=0,checkout,tq=0,sq=0,swq=0,tb=0,sb=0,swb=0,total_items;
float discount=0,payable=0;
do {
printf("Choice\t\tItem\t\tPrice(Rs)\n");
printf("1\t\tTea\t\t60\n");
printf("2\t\tSamosa\t\t40\n");
printf("3\t\tSandwich\t180\n");
printf("4\t\tCheckout\t-\n");
printf("Enter your choice : ");
scanf("%d",&choice);
if ( choice <0 || choice >4)
printf("Invalid choice\n");
if ( choice == 1){
printf("Enter quantity (TEA): ");
scanf("%d",&tq);
tb= tq * 60;
total_items = sq+tq+swq;
bill = tb + sb + swb;
printf("Current bill is %d\n",bill);
}
if ( choice ==2){
printf("Enter quantity (SAMOSA): ");
scanf("%d",&sq);
sb= sq * 40;
total_items = sq+tq+swq;
bill = tb + sb + swb;
printf("Current bill is %d\n",bill);
}
if ( choice ==3){
printf("Enter quantity (SANDWICH): ");
scanf("%d",&swq);
swb = swq * 180;
total_items = sq+tq+swq;
bill = tb + sb + swb;
printf("Current bill is %d\n",bill);
}
else if ( choice ==4){
printf("Checkout\n");
if (bill > 1000){
discount = bill * 0.10;
}
else {
discount = 0;
}
payable = bill - discount;
printf("Total items %d\n",total_items);
printf("Total bill is %d\n",bill);
printf("Total discount is %.2f\n",discount);
printf("Payable is %.2f\n",payable);
} 

}while ( choice !=4);
return 0;
}
