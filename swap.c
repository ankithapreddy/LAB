#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Value of a=%d and b =%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Swapped Value of a=%d and b=%d\n",a,b);
}
