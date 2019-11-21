
#include <stdio.h>
#include <string.h>



int main(void) 
{ 
	int  i;
	char input[100];
	FILE *fp;
	
	fp = fopen("sample.txt", "r");
	for(i=0;i<3;i++)
	{
		//printf("input a word :");
		//scanf("%s", input);
		fprintf(fp, "%s", input);
		printf("s\n", input);
	}
	
	fclose(fp);
	return 0;
}

