/*#include <stdio.h>
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
	
	fclose(fp);
	
	return 0;
}*/


//ì¸óÕÇÕïWèÄì¸óÕ
//Ç«ÇÃèÍèäÇ…ÇÕÇ«ÇÃtoktypeÇ™Ç†ÇÈÇ©ÅH

#include <stdio.h>
#include <ctype.h>

enum tokType
{
	OpPlus,OpMinus,OpEqual,
	Number,
	EndOfFile
};

static enum tokType gettok(char *buf, int bufsize)
{
	//Ç±Ç±ÇèëÇ≠
	int c;
	
	while((c = getchar()) != EOF)
	{
		if(c == '+')
		{
			
			return OpPlus;
		}
		else if(c == '-')
		{
			return OpMinus;
		}
		else
		{
			return EndOfFile;
		}
	}
}
int main()
{
	enum tokType tok;
	char buf[100];
	
	while((tok = gettok(buf, sizeof(buf))) != EndOfFile)
	{
		printf("tok = %d; buf = %s\n", tok, buf);
	}
	
	return 0;
}