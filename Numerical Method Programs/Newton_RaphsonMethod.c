#include<stdio.h>
#include<math.h>

#define max 5

//Newton-Raphson's Method
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

float derivative(float poly[],float x,int degree)
{
    float h=0.01;
    float deri;
    deri = (evaluate(poly,x+h,degree) - evaluate (poly, x-h, degree))/(2*h);
    return deri;
}

int main ()
{
    int degree,i;
    float x, poly[max], fx, fy, y, deriv;

    printf("Enter the degree of the polynomial (max 5): ");
    scanf("%d",&degree);
    printf("Enter the coefficients: ");
    for (i=0; i<=degree; i++)
    {
        scanf("%f",&poly[i]);
    }
    //initial guess
    label:
    printf("Initial guesses: x0= ");
    scanf("%f",&x);
    fx=evaluate(poly,x,degree);
    printf("\n x_i \t\t f(x_i) \t\t f'(x_i) \t\t x_i+1 \t\t f(x_i+1) \n");

    while (fabs(evaluate(poly,x,degree))>0.001) 
{
    deriv= derivative(poly,x,degree);
    if (deriv==0)
    {printf("Division by zero case, try another initial guess: ");
    goto label;
    }
      y=x-(fx/deriv);
    fy= evaluate (poly,y,degree);

printf("%f \t %f \t\t %f \t\t %f \t %f \n",x,fx,deriv, y, fy);
x=y;
fx=fy;

}
printf("The root is: %f",x);
    return 0;
}
