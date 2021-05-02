//one's compliment and size of operators
#include <stdio.h>
int main(){
  int num1=57,num2;
 
	num2=~num1;
	printf("num2=>%u\n",num2);
	//for size of operators
	int num;
    char c;
	printf("integer occupies=>%d bytes\n",sizeof(num));
    printf("character occupues=>%d bytes\n",sizeof(c));
	printf("double constant occupies=>%d bytes\n",sizeof(16.18));
	printf("long int datatype qualifiers occupies=>%d bytes\n",sizeof(15L));
	printf("float data type occupies=>%d bytes\n",sizeof(15.3f));
	return 0;
	}
