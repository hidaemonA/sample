#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUF_SIZE 1024

enum tokType
{
	OpPlus,OpMinus,OpEqual,
	Number
};

int getType(char c)
{
	enum tokType type;
	
	if(c == '+')
	{
		type = OpPlus;
	}
	if(c == '-')
	{
		type = OpMinus;
	}
	if(c == '=')
	{
		type = OpEqual;
	}
	if(isdigit(c))
	{
		type = Number;
	}
	return type;
}

int main()
{
	
	int c;
	while((c=getchar()) != EOF)
	{
		if(isspace(c))
		{
			continue;
		}
		if(getType(c))       //if(c == '+' || c == '-' || c == '=')
		{
			putchar(c);
			break;
		}
		else if(getType(c))  //(isdigit(c))
		{
			do
			{
				putchar(c);
			}
			while((c = getchar()) != EOF && getType(c));  //isdigit(c));
			break;
		}
		else
		{
			fprintf(stderr,"invalied char %c\n", c);
		}
	}
	
	/*FILE *fp;
	char c[BUF_SIZE];
	
	printf("nyuuryokusiro\n");
	scanf("%c",c);
	printf("%c",c[0]);
	
	fp = fopen("A.txt","r");
	
	if(fp == NULL)
	{
		printf("file open error");
		exit(EXIT_FAILURE);
	}
	c = fgetc(fp);
	printf("%c",c);
	
	fclose(fp);*/
	
	return 0;
}