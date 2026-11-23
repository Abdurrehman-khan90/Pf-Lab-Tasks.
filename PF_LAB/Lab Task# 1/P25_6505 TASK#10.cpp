#include <stdio.h>
int main()
{
    float pf_marks=88.0;
    float calculus_marks=76.5;
    float physics_marks=82.0;

    int pf_credit=3;
    int calculus_credit=3;
    int physics_credit=2;

    float total_weighted_score;
    int total_credit_hours;
    float weighted_average;

    total_weighted_score=(pf_marks*pf_credit)+(calculus_marks*calculus_credit)+(physics_marks*physics_credit);
    total_credit_hours = pf_credit + calculus_credit + physics_credit;
    weighted_average = total_weighted_score / total_credit_hours;
     printf("=============== SEMESTER ACADEMIC REPORT ===============\n");
    printf("Course\t\t\tCredit Hours\tObtained Marks\n");
    printf("---------------------------------------------------------\n");
    printf("Programming Fundamental.\t3\t\t%.2f\n", pf_marks);
    printf("Calculus\t\t3\t\t%.2f\n", calculus_marks);
    printf("Applied Physics\t\t2\t\t%.2f\n", physics_marks);
    printf("---------------------------------------------------------\n");
    printf("Total Credits: %d\tWeighted Average: %.2f%%\n", total_credit_hours, weighted_average);
    printf("=========================================================\n");

    return 0;
}
