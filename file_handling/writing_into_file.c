#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;
	fptr=fopen("newfile.txt","w");

	fputs("hello there how are you we are learning c language",fptr);
	fputs("C programming is used to bit level coding",fptr);

	return 0;
}

