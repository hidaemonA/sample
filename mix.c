/*github�g����
git add mix.c(�t�@�C����)
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
	
	FILE *fp1;									//�t�@�C���|�C���^�̐錾
	FILE *fp2;
	
	char buf1[BUFSIZE];							//������(����)���i�[����z���p��
	char buf2[BUFSIZE];
	
	if(fp1 = fopen("a.txt","r") == NULL) 					//a.txt��ǂݎ���p�ŊJ��
	{
		printf("file open error");
		exit(EXIT_FAILURE);
	}
	
	if(fp2 = fopen("b.txt","r") == NULL)
	{
		printf("file open error");
		exit(EXIT_FAILURE);
	}
	
	
	/*���qver
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
	
	/*while(fgets(buf1, BUFSIZE, fp) != NULL)		//����:�t�@�C�����ǂݎ��Ȃ��Ȃ�܂�
	{
		fputs(buf1, stdout);					//stdout(���)��buf�̕������\��
		printf("\n");
	}
	while(fgets(buf2, BUFSIZE, fp) != NULL)
	{
		fputs(buf2, stdout);
		printf("\n");
	}*/
	
	fclose(fp1);								//�t�@�C�������
	fclose(fp2);
	
	return 0;
}
