//explict type
#include <stdio.h>
int main(){
	int boys,girls;
	float ratio;
	printf("Enter the no of boys\n");
	scanf("%d",&boys);
	printf("Enter the no of girls\n");
	scanf("%d",&girls);
	ratio=boys/girls;
	printf("Ratio=%.2f\n",ratio);
	ratio=(float)boys/girls;
	printf("Ratio=%.2f\n",ratio);
	return 0;
	}
    