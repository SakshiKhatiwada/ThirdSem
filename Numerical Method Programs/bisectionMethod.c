#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 5
//Bisection Method Implementation

float evaluate (float [],float x, int degree );


int main ()
{
    int degree,i;
    float a,b,x, poly[max];
    //initial guess

    printf("Enter the degree of the polynomial (max %d): ",max);
    scanf("%d",&degree);
    printf("Enter the coefficients: ");
    for (i=0; i<=degree; i++)
    {
        scanf("%f",&poly[i]);
    }
    printf("Initial guesses: a= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    x= (a+b)/2;

    printf("\n a \t\t b \t\t x \t\t f(x) \n");

    while (fabs (evaluate(poly,x,degree))>0.001) 
{
printf("%f \t %f \t %f \t %f \n",a,b,x,evaluate(poly,x,degree));

if (evaluate(poly,a,degree)*evaluate(poly,x,degree)<0)
b=x;
else
a=x;
x=(a+b)/2;
}
printf("The root is: %f",x);
    return 0;
}

float evaluate (float poly[],float x, int degree )
{
    int i; float p;
    p=poly[0];
    for (i=1; i<=degree; i++)
    {
        p= p*x+ poly[i];
    }
    return p;

}
