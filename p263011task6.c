#include <stdio.h>
int main (){
float  vi= 12.5;
float a = 3.2;
float t = 6.0;
float vf;
float s;
vf = vi +(a*t);
s=(vi*t) +(0.5*a*t*t);
printf("Initial Velocity (vi):\t%.2fm/s\n",vi);
printf("Acceleration (a):\t%.2fm/s^2\n",a);
printf("Time Elapsed (t):\t%.2fs\n",t);
printf("----------------------------------------------\n");
printf("Calculated Final Velocity (vf):\t%.2fm/s\n",vf);
printf("Calculated Distance (s):\t%.2fm\n",s);
printf("============================================================");
}

