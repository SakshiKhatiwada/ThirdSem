#include<stdio.h>
 int main()
{
    float It,C,Dl,Physics,Math,Obtained_marks,Percentage;
    int full_marks=500;
    printf("Enter Obtained Marks in It\n");
    scanf("%f",&It);
    printf("Enter Obtained Marks in C Programming\n");
    scanf(" %.1f",&C);
    printf("Enter Obtained Marks in Digital Logic\n");
    scanf(" %.1f",&Dl);
    printf("Enter Obtained Marks in Physics\n");
    scanf(" %.1f",&Physics);
    printf("Enter Obtained Marks in Mathematics\n");
    scanf(" %.1f",&Math);
    Obtained_marks=It+C+Dl+Physics+Math;
    printf("You scored %.1f Marks\n",Obtained_marks);
    Percentage=(Obtained_marks/full_marks)*100;
    printf("You got %f percentage of Marks\n",Percentage);
    return 0;
}