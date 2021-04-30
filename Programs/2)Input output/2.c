
//program to demostrate  use of getchar(),putchar(),getch(),getche()and putch() functions (Unformatted I/O)
#include <stdio.h>
#include<conio.h>
int main(){
	char c1,c2,c3;
	printf("Enter the first character\n");
	c1=getchar();
	printf("The character you just entered is\n");
	putchar(c1);
	printf("\nEnter the second character");
	c2=getche();
	printf("\nThe chatacter you just entered is ");
	putch(c2);
	printf("\nEnter the third character ");
	c3=getch();
	printf("\nThe character you just entered is ");
	putch(c3);
	return 0;
	}

