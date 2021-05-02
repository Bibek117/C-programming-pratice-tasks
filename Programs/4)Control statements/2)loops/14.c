//Display the pattern using nested for loop
//      1 2 3 4 5 6 7
//      1 2 3 4 5 6 
//      1 2 3 4 5 
//      1 2 3 4
//      1 2 3 
//      1 2 
//      1 
//      1 2 
//      1 2 3 
//      1 2 3 4 
//      1 2 3 4 5 
//      1 2 3 4 5 6 
//      1 2 3 4 5 6 7
#include <stdio.h>
int main(){
	int a,b;
	for(a=7;a>=1;a--){
		for(b=1;b<=a;b++){
			printf("%d\t",b);
			}printf("\n");
			}
			for(a=2;a<=7;a++){
				for(b=1;b<=a;b++){
					printf("%d\t",b);
					}printf("\n");
					}
			return 0;
			}