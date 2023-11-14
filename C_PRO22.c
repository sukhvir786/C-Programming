//WAP using function to find the largest of three numbers
int LARGEST(int a,int b,int c)
{
	int L;
	L = a>b?(a>c? a:c):(b>c? b:c);
	return L;
}

int main()
{
	int x,y,z,LARGEST(int,int,int);
	printf("Enter 3 integer values : \n");
	scanf("%d%d%d",&x,&y,&z);
	printf("Largest : %d",LARGEST(x,y,z));
	return 0;
}
