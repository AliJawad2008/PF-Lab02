#include <stdio.h>
int main (){
 int value = 42 ;
 char letter ='M';
 float num= 3.14590;
 double pointvalue = 98.765432;
 //for int its value and its size in memory
 printf("Type name\tVariable value\tSize in memory\n");
printf("int\t\t");
printf("%d\t\t",value);
printf("%d byte(s)\n",sizeof(int));
//for char its value and its size in memory
printf("char\t\t");
printf("%c\t\t",letter);
printf("%d byte(s)\n",sizeof(char));
//for float its value and its size in memory
printf("float\t\t");
printf("%.5f\t\t",num);
printf("%d byte(s)\n",sizeof(float));
//for double its value and its size in memory
printf("double\t\t");
printf("%lf\t",pointvalue);
printf("%d byte(s)",sizeof(double));
return 0;
}