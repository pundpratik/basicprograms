#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("the swapped result is %d\n %d",a,b);
	return 0;
	
}
