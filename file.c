#include<stdio.h>

int main(){

	int c;
	
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '	' || c == '\n'){
			break;
		}
		else{
			printf("%c",c);
		}
	}
	return 0;
}