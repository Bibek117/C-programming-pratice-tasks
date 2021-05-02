//program to find the first 7 prime numbers (i.e 2 3 5 7.....)
//similarly you can write a program to find first n prime numbers
#include<stdio.h>
int  main()
{
    int count =0;
     int num = 2;
    while(count<=7){
       
        int flag =0;
        for(int i = 2;i<=num;i++){
            if(num%i==0){
               flag++;
            }
        }
        if(flag == 1){
            printf("%d\t",num);
            count++;
        }
        num++;
    }
    return 0;
}