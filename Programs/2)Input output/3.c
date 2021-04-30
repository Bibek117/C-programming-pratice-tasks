//program to demostrate puts() and gets() string function
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("Enter your name ");
    gets(name);
    printf("Name : ");
    puts(name);
    return 0;
}