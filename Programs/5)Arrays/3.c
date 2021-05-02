//program to show memory address of array elements
#include <stdio.h>
int main(){
	int array[]={3,45,7,8,9},i;
	for(i=0;i<5;i++){
		printf("The memory address of array element %d is %u\n",array[i],&array[i]);
		}
	return 0;
		}