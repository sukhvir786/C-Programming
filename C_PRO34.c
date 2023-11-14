//WAP to create Student I-Card using a Structure
#include <stdio.h>
struct SICARD 
{
    char NAME[30];
    int RNO;
    int CLASS;
    char ADD[30];
} OBJ[3];

int main() 
{
	int i;
	printf("Enter the following info for I CARD : \n");
	for(i=0;i<3;i++)
	{
		printf("\nEnter info of %d student\n",i+1);
		printf("Enter Name of the Student : \n");
		scanf("%s",&OBJ[i].NAME);
		printf("Enter Roll Number of the Student : \n");
		scanf("%d",&OBJ[i].RNO);
		printf("Enter CLASS of the Student : \n");
		scanf("%d",&OBJ[i].CLASS);
		printf("Enter Address City of Student : \n");
		scanf("%s",&OBJ[i].ADD);
	}
	printf("\nEntered Information is :\n");
	printf("NAME\tRNO\tCLASS\tADDRESS\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t%d\t%d\t%s\n",OBJ[i].NAME,OBJ[i].RNO,OBJ[i].CLASS,OBJ[i].ADD);
	}
	return 0;	
}
	
