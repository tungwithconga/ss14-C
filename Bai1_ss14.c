#include <stdio.h>
#include <string.h> 
int main(){
	char str[100];
	printf("Hay nhap vao 1 chuoi bat ki: \n");
	fgets(str,100,stdin);
	printf("Chuoi ban vua nhap la: %s\n",str);
	int length = strlen(str); 
	printf("Chuoi ban nhap co do dai la: %d",length); 
}
