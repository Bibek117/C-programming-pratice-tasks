//program to write two functions rect_area() and circ_area() which compute area of rectangle and circle respectively (required : first function return type must be void and second float)
#include <stdio.h>
#define PI 3.14
void rect_area(float l,float b);
float circ_area(float r){
	return PI*r*r;
	}
	int main(){
		float length,breadth,radius=5,n;
		printf("Enter the length and breadth of rectangle(l,b):\n");
		scanf("%f%f",&length,&breadth);
		/*printf("Enter the radius of circle:\n");
		scanf("%f",&radius);
		/*n=circ_area(radius);*/
		printf("The area of circle is %.3f\n",circ_area(radius));
		rect_area(length,breadth);
		return 0;
		}
		void rect_area(float l,float b){
			float area;
			area=l*b;
			printf("The area of rectangle is %.2f\n",area);
			}