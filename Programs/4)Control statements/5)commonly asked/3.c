//Program to check the number is palindrome or not (i.e 121)
#include <stdio.h>
int main(){
	int a;
	long temp,sum=0,n;
	printf("Enter the number you want to check\n");
	scanf("%ld",&n);
	temp=n;
	while(n!=0){
		a=n%10;
		sum=sum*10+a;
		n=n/10;
		}
		n=temp;
		if(sum==temp){
			printf("The number is palindrome.\n");
			}else{
				printf("The number  is not a palindrome.\n");
            }
				return 0;
				}