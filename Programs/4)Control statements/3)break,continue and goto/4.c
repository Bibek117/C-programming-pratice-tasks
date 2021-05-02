//program to demostrate use of goto statement
#include <stdio.h>
int main(){
	int n1,n2;
     
	printf("Enter the first number\n");
	scanf("%d",&n1);
	if(n1<0){
		goto negative;  //goto call
		}else{
		printf("Enter the second number\n");
		scanf("%d",&n2);
        }
		if(n2<0){
			goto negative;
			
		}else{
			printf("Both the numbers are positive\n");
	}	
    negative:printf("Either of the number is negstive");  //goto defination
		return 0;
			}
