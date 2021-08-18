//write a program to find given number is prime or not.
#include<stdio.h>
int main()
{
	int num,m=0,f=0,i;
	printf("\n enter any value");
	scanf("%d",&num);
	m=num/2;
	for(i=2;i<=m;i++)
	{
		if(num%2==0)
		{
			printf("number is not  prime",num);
			f=1;
			break;
			
		}
	}
	if(f==0)
	{
		printf("\n number is prime");
		
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int num,f=1,i;
	printf("\n enter any number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("\n factorial =%d",f);
	return 0;
}*/
