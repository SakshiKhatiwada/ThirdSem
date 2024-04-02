#include<stdio.h>
#include<string.h>

int main ()
{
    int n;
    char name[10]="Sakshi", Name[10]="Khatiwada";
printf("Name: %s\t Caste: %s\n",name, Name);
n= strlen(name);
strrev(name);
printf("%s  ",name);
strlwr(name);
printf("%s  ",name);
strupr(name);
printf("%s  ",name);
strcpy(name, Name);
printf("Name: %s\t Caste: %s\n",name, Name);
strcat(name, Name);
printf("%s ", strcat(name,Name));
printf("Name: %s\t Caste: %s\n",name, Name);
return 0;
}