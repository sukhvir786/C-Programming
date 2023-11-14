//WAP to read data from a file
# include <stdio.h>
# include <process.h>
int main()
{
	FILE *fp,*fp1;
	char c = ' ';
	fp = fopen("PRO35.txt","w");
	if(fp==NULL)
	{
		printf("can't open this file");
		exit(1);
	}
	printf("Enter the data in file and to stop press '.'\n");
	while(c!='.')
	{
		c = getche();
		fputc(c,fp);
	}
	fclose(fp);
	
	printf("\nEntered text is\n");
	fp1 = fopen("PRO35.txt","r");
	while(!feof(fp1))
	{
		printf("%c",getc(fp1));
	}
	fclose(fp1);
	
	return 0;
}
