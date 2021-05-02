//program to ask user to enter 5 numbers and store them in array and display 1)all elements in array 2)sum of first and last element of array
//3)product of 2nd and 3rd element of array
#include <stdio.h>
int main(){
	int a[5],i,sum,prod;
	printf("Enter any five numbers\n");
	for(i=0;i<5;i++){
		printf("The array element a[%d]:",i);
		scanf("%d",&a[i]);
		}
		printf("The numbers entered are \n");
		for(i=0;i<5;i++){
			printf("a[%d]=%d\n",i,a[i]);
			}
			sum=a[0]+a[4];
			printf("The sum of first and last element of array is %d\n",sum);
			prod=a[1]*a[2];
			printf("The product of 2nd and 3rd element is %d\n",prod);
			return 0;
			}