// program to take numbers from 1 to 7 and diplay the day 
#include <stdio.h>
int main(){
	int n;
	printf("Enter any number from 1 to 7:\n");
	scanf("%d",&n);
	switch(n){
		case 1:
		printf("The day is Sunday.\n");
		break;
		case 2:
		printf("The day is Monday.\n");
		break;
		case 3:
		printf("The day is Tuesday.\n");
		break;
		case 4:
		printf("The day is Wednesday.\n");
		break;
		case 5:
		printf("The day is Thursday.\n" );
		break;
		case 6:
		printf("The day is Friday.\n");
		break;
		case 7:
		printf("The day is Saturday.\n");
		break;
		default:
		printf("WARNING::Invalid number given.\n");
		}
		return 0;
		}
