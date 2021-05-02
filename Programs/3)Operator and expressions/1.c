//to take values in seconds and display it in minutes and seconds
#include <stdio.h>
int main(){
	int sec,min;
	printf("Enter the time in seconds\n");
	scanf("%d",&sec);
	min=sec/60;
	sec=sec%60;
	printf("Minutes=%d \tSeconds=%d\n",min,sec);
	return 0;
	}
