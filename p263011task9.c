#include <stdio.h>
int main(){
    float PF = 88.0;
    int cd =3;
    float CAG = 76.5;
    int c_d = 3;
    float AP = 82.0;
    int _cd = 2;
    float TotalWeightedScore;
    int Totalcredithours;
    float WeightedAveragePercentage;
    TotalWeightedScore = (PF*cd)+(CAG*c_d)+(AP*_cd);
    Totalcredithours = 3+3+2;
    WeightedAveragePercentage = TotalWeightedScore/Totalcredithours;
     printf("================ SEMESTER ACADEMIC REPORT =================\n");
     printf("Course\t\t Credit Hours\t\t Obtained Marks\n");
     printf("-----------------------------------------------------------\n");
     printf("Programming Fund.\t");
     printf("%d\t\t",cd);
     printf("%.2f\n",PF);
     printf("Calculus\t\t");
     printf("%d\t\t",c_d);
     printf("%.2f\n",CAG);
     printf("Applied Physics\t\t");
     printf("%d\t\t",_cd);
     printf("%.2f\n",AP);
     printf("-----------------------------------------------------------\n");
     printf("Total Credit hours:\t%d\t",Totalcredithours);
     printf("Weigheted Average:\t%.2f\n", WeightedAveragePercentage);
     printf("===========================================================");
     return 0;
}
