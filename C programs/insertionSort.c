#include<stdio.h>
#define max 10

void Selection_Sort(int Array[], int n)
{
    int i, j, temp;
    for (i=0; i<n; i++)
    {
        j=i; 
        while (j>0 && Array[j-1]>Array[j])
        {
            //swapping
            temp = Array[j-1];
            Array[j-1] = Array[j];
            Array[j] = temp;
            j--; //to insert it after swapping every previous element greater than that
        }
    }

}

void display (int Array[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%d  ",Array[i]);
    }
}
int main()
{
    int Array[max], n;
    printf("Enter the size of the array (max %d supported): ",max);
    scanf("%d",&n);

    printf("Enter Array elements: \n") ;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&Array[i]);
    }
printf("\n\nBefore Sorting: ");
display(Array,n);
   Selection_Sort(Array,n);
printf("\nAfter sorting: ");
 display(Array, n);
}