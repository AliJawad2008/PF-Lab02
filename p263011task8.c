#include <stdio.h>
int main(){
    double basic_salary = 85000.00;
    float HRA;
    float MA;
    float Gross_salary;
    float IncomeTaxDeduction;
    float Net_salary;
    HRA = (0.20*basic_salary);
    MA = (0.10*basic_salary);
    Gross_salary = (basic_salary + HRA + MA);
    IncomeTaxDeduction = (0.05*Gross_salary);
    Net_salary = (Gross_salary-IncomeTaxDeduction);
    printf("================= MONTHLY SALARY SLIP ==================\n");
    printf("Basic Salary:\t\t\tPKR %.2f\n",basic_salary);
    printf("House Rent Allowance (20%%):\tPKR %.2f\n",HRA);
    printf("Medical Allowance (10%%):\tPKR %.2f\n",MA);
    printf("--------------------------------------------------------\n");
    printf("Gross Salary:\t\t\tPKR %f\n",Gross_salary);
    printf("tax Deduction (5%%):\t\tPKR %.2f\n",IncomeTaxDeduction);
    printf("--------------------------------------------------------\n");
    printf("Net Payable Salary:\t\tPKR %.2f\n",Net_salary);
    printf("========================================================");
    return 0;
}




