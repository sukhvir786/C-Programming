//WAP to save Employee details in a file using File Handling
#include<stdio.h>
void main()
{
    FILE *fp;
    int i;
    float SAL;
    char name[10];
    fp = fopen("PRO36.txt", "w");
    for(i=0; i<3; i++)
    {
        printf("\nEnter Record of %d Empoloyee\n",i+1);
		printf("Enter the name of Employee: ");
        scanf("%s", name);
        printf("Enter Salary of Employee : ");
        scanf("%f", &SAL);
        fprintf(fp, "%s %f\n", name,SAL);
    }
	fclose(fp);
	fp = fopen("PRO36.txt", "r");
	printf("-----------------\n");
	printf("NAME\t SALARY\n");
	printf("-----------------\n");
	for(i=0; i<3; i++)
    {
    	fscanf(fp,"%s%f\n", &name,&SAL);
    	printf("%s\t%.2f\n", name,SAL);
    }
    fclose(fp);
    return 0;
}
