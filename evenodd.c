#include<stdio.h>
int input()
{
	int a;
	printf("Enter the number you want to check\n");
	scanf("%d",&a);
	return a;
}
int compute(int a)
{
	if(a%2==0)
	{
		printf("The number is even\n");
	}
	else{
		printf("The number is odd\n");
	}
}
void main()
{
	int z,x;
	z=input();
	x=compute(z);
}
