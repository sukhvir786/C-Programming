/*
WAP to find the simple interest,inputs are amount, period in years and rate of interest.
*/
# include <stdio.h>
int main()
{
	float AM,PER,ROI,SI,PRIN;
	printf("Enter Amount, Period(in years) and Rate of Interest : \n");
	scanf("%f%f%f",&AM,&PER,&ROI);
	PRIN = (AM*100)/(ROI*PER+100);
	SI = (PRIN*ROI*PER)/100;
	printf("Principal : %.3f",PRIN);
	printf("\nSimple Interest : %.3f",SI);
	return 0;
}
