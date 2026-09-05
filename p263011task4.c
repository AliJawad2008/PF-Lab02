#include <stdio.h>
int main(){
    float Celsius =37.5;
    float Fahrenhiet;
    float Kelvin;
    Fahrenhiet = (Celsius*1.8)+32.0;
    Kelvin = Celsius+273.15;
    printf("=========TEMPERATURE CONVERSION =========\n");
    printf("Temperature in Celsius: %.2f°C\n", Celsius);
    printf("Temperature in Fahrenhiet: %.2f°F\n",Fahrenhiet);
    printf("Temperature in Kelvin: %.2f K",Kelvin);
    return 0;

}