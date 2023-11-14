/*
Basic salary of an employee is input through the keyboard. 
The DA is 25% of the basic salary while the HRA is 15% of the basic salary. 
Provident Fund is deducted at the rate of 10% of the gross salary(BS+DA+HRA). 
WAP to calculate the net salary
*/
# include <stdio.h>
int main()
{
	float BS,DA,HRA,PF,NETSAL;
	printf("Enter Basic Salary of the employee : ");
	scanf("%f",&BS);
	DA = 0.25 * BS;
	HRA = 0.15 * BS;
	PF = 0.10 * (BS+DA+HRA);
	NETSAL = BS+DA+HRA-PF;
	printf("Net Salary of the employee is : %.2f",NETSAL);
	return 0;
}
