#include <stdio.h>
int main()
{
    char name[50];
    float basic, hra, da, pf, gross, net;
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    hra = 0.20 * basic;
    da = 0.10 * basic;
    pf = 0.08 * basic;
    gross = basic + hra + da;
    net = gross - pf;
    printf("\nEmployee Name : %s\n", name);
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("PF           : %.2f\n", pf);
    printf("Gross Salary : %.2f\n", gross);
    printf("Net Salary   : %.2f\n", net);
    return 0;
}