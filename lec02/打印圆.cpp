#include<stdio.h>
#include<math.h>
int main() {
	int n=71;
	int i,j;
	char x='A';
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){		
			if(hypot(i-n/2,j-n/2)<=n/2)
				{
					putchar(x);
					if(x=='Z')
						x='A';
					else x++; 
					
				}
			else
				printf(" ");
		}
		printf("\n");
		
	} 
}

