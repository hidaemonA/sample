#include<stdio.h>

int main()
{
	int c;
	
	while((c = getchar()) != EOF){
		printf("%s",c);
	}
	return 0;
}