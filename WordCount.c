#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *file;    //�ļ�ָ��
	char c;		   //�洢��ȡ�����ַ�
	int words=0;   //��¼�ַ�����
	int lines=0;   //��¼����
	
	//���ļ��������ʧ�ܻ᷵��NULL(�൱��0)
	file=fopen("word.txt","r");
	if(!file)
	{
		printf("�ļ���ʧ�ܣ�");
		return 1;
	}
	
	//ͳ���ַ�����������
	//fgetc()��ȡʧ�ܻ��ļ�ĩβ�᷵��EOF(����-1)
	while((c=fgetc(file))!=EOF)
	{
		if(c!='\n')
		{
			words++;
		}
		else
		{
			lines++;
		}
	}
	
	//��Ϊ�ļ�ĩβһ��û�л��з��ţ���˿�����һ��
	lines++;
	
	printf("%d\n",words);
	
	//�ǵùر��ļ�
	fclose(file);
	
	
	return 0;
}
