//program to read a string from keyboard (until enter key) and count the numbers of vowels,spaces,semicolons ,consonents and commas in that string
#include <stdio.h>
#include <string.h>
int main(){
	int v=0,s=0,se=0,c=0,con=0,i;
	char b[100];
	printf("Enter a sentence:\n");
	gets(b);
	for(i=0;b[i]!='\0';i++){
		if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
		v++;
			}
		else if(b[i]==' '){
		s++;
			}
	else if(b[i]==';'){
		se++;
			}
	else if(b[i]==','){
		c++; 
			}
		else
		{
			con++;
		}}
		printf("The number of vowels is %d\n",v);
		printf("The number of spaces is %d\n",s);
		printf("The number of semicolons is %d\n",se);
		printf("The number of commas is %d\n",c);
		printf("The number of consonants is %d\n",con);
		return 0;
		}