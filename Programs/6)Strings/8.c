//program to concat string without using library function
#include <stdio.h>
#include<string.h>
int main(){
	char a[]="Ram",b[]="Prasad",c[]="Tamang";
	char d[50];
	int i,j,k;
	for(i=0;a[i]!='\0';i++){
		d[i]=a[i];
		}
		d[i]=' ';
		for(j=0;b[j]!='\0';j++){
			d[i+j+1]=b[j];
			}
			d[i+j+1]=' ';
			for(k=0;c[k]!='\0';k++){
				d[i+j+k+2]=c[k];
				}
				d[i+j+k+2]='\0';
				printf("The joined word is:\n");
				puts(d);
				return 0;
				}