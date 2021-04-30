//program to demostrate formatted Input/Output function  scanf() and printf()

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");  //use of printf()
    scanf("%d",&num);  //use of scanf()
    printf("The number you entered is %d",num);
    return 0;
}