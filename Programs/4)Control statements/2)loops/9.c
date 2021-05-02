/*program to read number from keyboard until a zero or negative number is entered.Finally calculating the sum and average of entered number using do while loop*/
#include <stdio.h>
int main(){
	int num,count=0;
	float sum=0,avg;

	
	do{
		printf("Enter any number\n");
	scanf("%d",&num);
		sum=sum+num;
		count++;
		}while(num>0);
		sum=sum-num;
		avg=sum/(count-1);
		printf("The sum is %.2f\n",sum);
		printf("The avgerage is %.3f",avg);
		return 0;
		}