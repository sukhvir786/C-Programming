//WAP using function to print first 20 numbers and its squares.
int SQ(int n)
{
	return n*n;
}
int main()
{
	int i;
	printf("No\tSq\n");
	for(i=1;i<=20;i++)
	{
		printf("%d\t%d\n",i,SQ(i));
	}
	return 0;
}
