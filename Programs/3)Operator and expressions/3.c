//	logical/boolean opertors
#include <stdio.h>
int main(){
	int a=10,b=5,c=20;
	printf("\na>b&&b>c=>%d",(a>b&&b>c));  //and operator
	printf("\na<b&&a<c=>%d",(a<b&&a>c));
	printf("\na>b||b>c=>%d",(a>b||b>c));  //Or operator
	printf("\na<b||a<c=>%d",(a<b||a<c));
	printf("\na>b||a>c=>%d",(a>b||a>c));
    printf("\n!(a<b)=>%d",!(a<b)); //must be true NOT operator
	return 0;
	}
