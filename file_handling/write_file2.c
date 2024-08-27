#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;

	fptr=fopen("programming.txt","w");
	fputs("C programming\n",fptr);
	fputs("python programming\n",fptr);
	fputs("shell scripting\n",fptr);
	fputs("java programming\n",fptr);

	fclose(fptr);

	return 0;
}
