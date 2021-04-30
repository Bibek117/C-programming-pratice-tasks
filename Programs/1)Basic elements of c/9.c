//to demostrate use of enum keyword
#include <stdio.h>
int main(){
	enum days{sun,mon,tue,wed,thu,fri,sat};
	enum days day1,day2=sat;
	int diff;
	diff=day2-day1;
	printf("days between=%d\n",diff);
	if(day1<day2);
	printf("day1 comes before day2\n");
    return 0;
	}