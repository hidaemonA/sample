/*github使い方
git add mix.c(ファイル名)
git
*/


#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

int main(/*int argc, char **argv*/)
{
	/*test
	--------------------------------------------
	int i;
	printf("argc = %d\n",argc);
	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = [%s]\n", i, argv[i]);
	}
	--------------------------------------------*/
	
	FILE *fp1;									//ファイルポインタの宣言
	FILE *fp2;
	
	char buf1[BUFSIZE];							//文字列(文字)を格納する配列を用意
	char buf2[BUFSIZE];
	
	if(fp1 = fopen("a.txt","r") == NULL) 					//a.txtを読み取り専用で開く
	{
		printf("file open error");
		exit(EXIT_FAILURE);
	}
	
	if(fp2 = fopen("b.txt","r") == NULL)
	{
		printf("file open error");
		exit(EXIT_FAILURE);
	}
	
	
	/*金子ver
	assert(fp1 != NULL);
	assert(fp2 != NULL);*/
	
	int i;
	for(i = 0; i < BUFSIZE; i++)
	{
		fputs(buf1[i],stdout);
		printf("\n");
		fputs(buf2[i],stdout);
		printf("\n");
	}
	
	/*while(fgets(buf1, BUFSIZE, fp) != NULL)		//条件:ファイルが読み取れなくなるまで
	{
		fputs(buf1, stdout);					//stdout(画面)にbufの文字列を表示
		printf("\n");
	}
	while(fgets(buf2, BUFSIZE, fp) != NULL)
	{
		fputs(buf2, stdout);
		printf("\n");
	}*/
	
	fclose(fp1);								//ファイルを閉じる
	fclose(fp2);
	
	return 0;
}
