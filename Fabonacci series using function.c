// with function
#include <stdio.h>

int fabo(int n)
{
	int a = 0,b = 1,i,c;
	for (i=0;i<n;i++)
	{		
		c = a + b;	
		printf("%d ",a);	
		a = b;		
		b = c;	
    
	}
}

//main function
void main()
{
	int n;
  printf("enter a number : ");
	scanf("%d",&n);
	fabo(n);
	
}
