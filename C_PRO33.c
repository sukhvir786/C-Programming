//WAP to show the memory occupied by Structure and Union
struct S
{
	char name[30];
	int rollno;
	float weight;
};
union U
{
	char n[30];
	int rno;
	float w;
};
int main()
{
	struct S obj1;
	union U obj2;
	printf("\nTotal Bytes taken by Structure : %d",sizeof(obj1));
	printf("\nTotal Bytes taken by Union : %d",sizeof(obj2));
	return 0;
}
