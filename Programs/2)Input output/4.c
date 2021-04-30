
//to write date and time in different formats
#include <stdio.h>
int main(){ 
	int day,month,year;
	printf("Enter the day,month,year in DD-MM-YYYY format\n");
	scanf("%d-%d-%d",&day,&month,&year);
	printf("day:%d \nmonth:%d \nyear:%d",day,month,year);
	printf("\nEnter the day,month,year in	DD/MM/YYYY format\n");
	scanf("%d/%d/%d",&day,&month,&year);
	printf("day:%d \nmonth:%d \nyear:%d\n",day,month,year);
	printf("Name:Bibek Angdembe \nRoll no:4");

	return 0;
	}
