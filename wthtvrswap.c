#include<stdio.h>
int main()
{
		int a,b;
		printf("\n enter any two number");
		scanf("%d%d",&a,&b);
		printf("\nthe before swapped value is a=%d and b=%d",a,b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("\nthe after swapped value is a=%d and b=%d",a,b);
		return 0;
}
