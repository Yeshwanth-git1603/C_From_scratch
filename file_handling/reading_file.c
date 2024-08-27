#include<stdio.h>
#include<string.h>

int main(){
	FILE *fptr;
	fptr = fopen("sample.txt","r");
	char content[1000];

	if (fptr != NULL){
		fgets(content,1000,fptr);
		printf("%s",content);
	}
	else{
		printf("file not found");
	}

	return 0;
}

