#include <stdio.h>


int rekurzivna(int n)
{
	if(n==0)
	{
		return 0;
	}

	int c;

	c = rekurzivna(n/100);
	
	int k = n % 10;

	if(k%2==0)
	{
		if(n<100)
			printf("%d",k);
		else
			printf(" + %d",k);

		return c+k;
	}

	return c;
}

int main()
{
	int n;
	scanf("%d",&n);

	int k = rekurzivna(n/10);
	printf(" = %d ", k);
	return 0;
}