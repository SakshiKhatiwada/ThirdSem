#include<stdio.h>
#include<stdlib.h>
#define max 10
//push pop operation in stack
int Push (int Stack[], int Top, int n);
int Pop (int Stack[], int Top, int n);
void display (int Stack[],int n);
int Top = -1;

int main ()
{
    int Stack[max],i,item,n,ch;
    char cho;
    //some elements are already present in the stack
    printf("Enter the no. of elements in the stack (max 10 supported): ");
    scanf("%d",&n);

    printf("Enter the elements in the stack: \n");
    for (i=0; i<n; i++)
   {
    Top++;
    scanf("%d",&Stack[i]);
   }


do {

   printf("You want to push or pop? Choose: 1 to push, 2 to pop: ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
       Top = Push (Stack, Top, n);
       n++;
       printf("After pushing: \n");
       display (Stack, n);
        break;

        case 2:
       Top= Pop (Stack, Top, n);
       n--;
       printf("After popping: \n");
       display (Stack, n);
        break;

        default:
        printf("Wrong option! Try again.\n");
    }
printf("Do you want to continue push-pop operations? Type Y to continue: ");
scanf(" %c",&cho);

} while (cho == 'y' || cho == 'Y');

printf("Final display: ");
display(Stack, n);
    return 0;
}

 int Push (int Stack[],int Top,int n)
{
    int item;
    if (Top+1 == max)
    {
        printf("Stack is full!\n");
        display (Stack, n);
        exit (1);
    }
    
    printf("Enter the element you want to push on the stack: ");
    scanf("%d", &item);
    Top ++;
    Stack [Top] = item;
    // n++;
    return (Top) ;
}


 int Pop (int Stack[],int Top,int n)
 {
    int item;
     if (Top== -1)
        {
            printf("Stack is empty, no elements to pop\n");
        //    display (Stack, n); -------> stack is empty so why would we need this?
            exit (1);
        }

        //popping
        item = Stack [Top];
        Top--;
        // n--;
        return Top;

 }

 void display (int Stack[],int n)
 {
    printf("Displaying Stack elements: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",Stack[i]);
    }
    printf("\n");
 }