#include <stdio.h>
int main(){
    float Radius= 7.5;
    float Pi =3.1459;
    float Diameter;
    float Circumference;
    float Area;
    Diameter = (2*Radius);
    Circumference=(2*Radius*Pi);
    Area=(Pi*Radius*Radius);
    printf("================ CIRCLE GEOMETRY REPORT ================\n");
    printf("Given Radius:\t%.3fcm\n",Radius);
    printf("Calculated Diameter:\t%.3fcm\n",Diameter);
    printf("Calculated Circumference:\t%.3fcm\n",Circumference);
    printf("Calculated Area:\t%.3fsq cm",Area);


}