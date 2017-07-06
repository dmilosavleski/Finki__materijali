#include <stdio.h>

// tomce resenie
int isPow(int x, int y) {
	if(x <= 1) return x;
    if(x % y != 0) return 0;
    return isPow(x / y, y);
}

// moe resenie
int req(int broj, int broj1)
{
	if(broj==broj1)
		return 1;
	if(broj1>broj)
		return 0;

	return req(broj,broj1*broj1);
}

int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int broj,broj1;

	for(i=0;i<n;i++)
	{
		scanf("%d %d",&broj,&broj1);
		if(req(broj,broj1))
			printf("DA\n");
		else
			printf("NE\n");
	}

	return 0;
}