#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1;

int isEmpty()
{
    if (top==-1)
    return 1;
    else
    return 0;
}

int isFull()
{
    if (top==(max-1))
    return 1;
    else
    return 0;
}

void push (int val, int Array[])
{
if (isFull())
{
printf("Stack Overflow\n");
exit (1);
}
top++;
Array[top]=val;
}

int  pop (int Array[])  //returns the value and remove it from the stack
{
    int item;
if (isEmpty())
{
    printf("Stack underflow\n");
    exit (1);
}
item=Array[top];
Array[top]=0;
top--;
return item;
}

int count()
{
    return (top+1);
}

int peek(int Array[])
{
    int pos;
if (isEmpty())
{
    
    printf("Inside peek func, Stack underflow\n");
    return 0;
}
else
{
    printf("Enter the position of the element you want to peek at(assume the first position to be 0): ");
    scanf("%d",&pos);
    return Array[pos];
}
}

void change (int pos, int val, int Array[])
{
Array[pos]=val;
printf("value changed at location %d and now the value is %d\n", pos, val);
}

void print (int Array[])
{
    //printing in a manner to show it is stack
    for (int i=max-1; i>=0; i--)
    {
        printf("%d ",Array[i]);
    }
    printf("\n");
}


int main ()
{
    char c;
int Stack[max],i;
//initailizing our stack
for (i=0; i<max; i++)
{
    Stack[i]=0;
}

printf("initially the no. of elements in the stack is:  %d \n", count());
{
push(5,Stack);
push(3,Stack);
push(2,Stack);
push(4,Stack);
push(8,Stack);

print(Stack);

pop(Stack);
printf("element we peeked at is: %d\n",peek(Stack));

change (1,99,Stack);


}
}


