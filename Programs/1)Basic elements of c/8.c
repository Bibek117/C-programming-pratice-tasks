// program to demostrate use of  typedef keyword
//typedef is a keyword used in C language to assign alternative names to existing types.

#include <stdio.h>
int main(){
	typedef float marks;
	marks DL,physics,math,IIT,c_programming,avg_marks;
	printf("Enter marks of DL:\n");
	scanf("%f",&DL);
	printf("Enter marks of physics:\n");
	scanf("%f",&physics);
	printf("Enter marks of math:\n");
	scanf("%f",&math);
	printf("Enter marks of c_programming and IIT:\n");
	scanf("%f%f",&c_programming,&IIT);
	avg_marks=(DL+physics+math+c_programming+IIT)/5;
	printf("avg_marks is %f\n",avg_marks);
	return 0;
	}