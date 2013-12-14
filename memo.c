#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

int main()
{
	FILE *fp;
	char c[BUF_SIZE];
	
	printf("nyuuryokusiro");
	scanf("%c",c);
	printf("%s",c[0]);
	/*fp = fopen("A.txt","r");
	
	if(fp == NULL)
	{
		printf("file open error");
		exit(EXIT_FAILURE);
	}
	c = fgetc(fp);
	printf("%c",c);*/
	
	fclose(fp);
	return 0;
}