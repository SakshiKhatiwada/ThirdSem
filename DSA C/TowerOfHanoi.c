#include<stdio.h>

void TOH (int n, int A, int B, int C) //A to C using B
{
    if (n>0)
    {
        TOH (n-1,A,C,B);
        printf("%d - %d  \n",A,C);
        TOH (n-1,B,A,C);
    }
}

int main ()
{
    int n;
    printf("Enter the no. of discs in Tower of Hanoi: ");
    scanf("%d",&n);

printf("\nMoves: \n");
    TOH (n,1,2,3); //From tower 1 to 3 using Tower 2

    return 0;
}