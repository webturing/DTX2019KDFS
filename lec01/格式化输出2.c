#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	double x=5000/3.0; 	 
	printf("%f\n",x);	
	printf("%.2f\n",x);	

	printf("%.0f\n",x);	
	printf("%.0f\n",ceil(x));
	printf("%.0f\n",floor(x));
	printf("%d\n",(int)x);	
	printf("%.2f\n",floor(x*100)/100.0);
	printf("%.2f\n",x-5e-3);			
	return 0;
}
