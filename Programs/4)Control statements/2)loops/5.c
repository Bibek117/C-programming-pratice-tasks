//sum of squares of n natural numbers using for loop
#include <stdio.h>
#include <math.h>
int main(){
	int n,a,sum=0;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		sum=sum+pow(a,2);
		}
		printf("The sum of squares of entered natural numbers is=%d\n",sum);
		return 0;
		}