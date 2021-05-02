//program to demostrate use of continue statement
#include <stdio.h>
int main(){
	int i;
	for(i=1;i<=20;i++){
	if(i%3==0||i%4==0)
	{
		continue;
		}
		printf("%d\t",i);
		}
		return 0;
		}