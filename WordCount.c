#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *file;    //文件指针
	char c;		   //存储读取到的字符
	int words=0;   //记录字符个数
	int lines=0;   //记录行数
	
	//打开文件，如果打开失败会返回NULL(相当于0)
	file=fopen("word.txt","r");
	if(!file)
	{
		printf("文件打开失败！");
		return 1;
	}
	
	//统计字符个数和行数
	//fgetc()读取失败或到文件末尾会返回EOF(就是-1)
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
	
	//因为文件末尾一般没有换行符号，因此可能少一行
	lines++;
	
	printf("%d\n",words);
	
	//记得关闭文件
	fclose(file);
	
	
	return 0;
}
