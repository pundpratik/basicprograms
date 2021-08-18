#include<stdio.h>
int main()
{
	float km,m,cm,mm,ft,inch;
	printf("\n enter the km");
	scanf("%f",&km);
	m=1000*km;
	cm=100*m;
	mm=10*cm;
	//ft=30.48*cm;
	//inch=2.54*cm;
	printf("\n km=%f ",km);
		printf("\n m=%f ",m);
			printf("\n cm=%f ",cm);
				printf("\n mm=%f ",mm);
				//	printf("\n %f ",ft);
					//	printf("\n %f ",inch);
						return 0;
	
}
