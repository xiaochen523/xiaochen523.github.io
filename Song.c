#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[30]; 
	printf("please input filename:\n");
	scanf("%s",filename); 
	if((fp=fopen(filename,"r"))==NULL) 
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fgets(str,sizeof(str),fp); 
	printf("\n^-^-^-^-^-^-^-^-^-^-^-^\n");
	printf("    %s",str);
	printf("^-^-^-^-^-^-^-^-^-^-^-^\n");
	fclose(fp);
    return 0;
}
