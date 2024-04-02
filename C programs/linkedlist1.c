#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Linked List 

int main()
{
    int count=0;
    char ch;
    struct node
    {
        int data;
        struct node *next;
    } *head, *current, *temp;   // 3 pointers to work with linked list

head=0;

do {

current = (struct node*) malloc (sizeof(struct node));
printf("Enter any integer data: ");
scanf("%d",&(current->data));
current->next = 0;
if (head==0) 
{
head=current;
 temp = current;   
}
else 
{
    temp->next = current;
    temp=current;
}

printf("Do you want to enter more data? Type 'y' to confirm: " );
scanf(" %c",&ch);

}while (ch =='y' || ch=='Y');

temp = head;
printf("Printing elements: ");
// for (int i=0; i<5; i++)  just to know why it is going in infinite loop. Findings: paila ko infinite loop stop nabhako raixa

while (temp != 0)
{
    printf("%d ",temp->data);
    temp = temp->next;
    // getch();
    count ++;
}
printf("\nThe no. of elements in the list is %d\n",count);
return 0;
}