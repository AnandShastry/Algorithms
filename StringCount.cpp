#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountReturn(char *str,char* ptr)
{
	char *cstr=strtok(str," ");
		int count=0;
		while(cstr!=NULL)
		{

			if(!strcmp(cstr,ptr))
			{
				count++;
			}

			cstr=strtok(NULL," ");
		}
	return count;
}

int main()
{
	char *str=NULL;
	char *sstr=NULL;
    gets(str);
    fflush(stdin);
    printf("Enter string to be searched\n");
    gets(sstr);
    printf("%d\n",CountReturn(str,sstr));

	return 0;
}
