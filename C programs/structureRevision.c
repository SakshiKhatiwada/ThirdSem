#include<stdio.h>

int main ()
{
    struct student
    {
        int roll;
        char name[10];
    };
    struct student st;

    printf("Enter the roll no. of the student: ");
    scanf("%d", &st.roll);
    printf("Enter the name of the student: ");
    scanf("%s", st.name);

    printf("Name: %s    Roll no.: %d ",st.name, st.roll);
    return 0;
}