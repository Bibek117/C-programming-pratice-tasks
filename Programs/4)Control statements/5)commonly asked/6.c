//program to check armstrong number or not (i.e 153)
#include <stdio.h>
#include <math.h>
int main(){
	int n,sum=0,a,temp;
	printf("Enter the number you want to check armstrong or not:\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		a=n%10;
		sum=sum+pow(a,3);
		n=n/10;
		}
		if(temp==sum){
			printf("The number %d is Armstrong\n",temp);
			}else{
				printf("The number is not Armstrong.\n");
				}
            return 0;
				}
