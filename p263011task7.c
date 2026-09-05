#include <stdio.h>
int main(){
    //Principal as P
    double P = 250000.00;
    //Rate as R
    float R = 8.5;
    //Time as T
    int T = 3;
    //Simple instrest a SI
    float  SI;
    //Payable amount as A
    float  A;
    //installment as I
    float I;
    SI = (P*R*T)/100.0;
    A = P+SI;
    I = A/(T*12.0);
    printf("================ BANK LOAN INTEREST SUMMARY ================\n");
    printf("Principal Amount (P);\tPKR %.2f\n",P);
    printf("Annual Instrest (R):\t%.2f%%\n",R);
    printf("Loan Duration:\t\t%d years (36 months)\n",T);
    printf("------------------------------------------------------------\n");
    printf("Total Accrued Interest:\tPKR %.2f\n",SI);
    printf("Total Payable Amount:\tPKR %.2f\n",A);
    printf("Monthly Installment:\tPKR %.2f\n",I);
    printf("============================================================");
}
