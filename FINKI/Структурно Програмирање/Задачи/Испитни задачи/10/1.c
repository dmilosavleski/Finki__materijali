#include <stdio.h>

// vo prviot clen zbirot e prviot + posledniot
// 5 3 2 8
// 13 5 2 8
void rekurzivna(int *niza,int n, int a)
{
	if(a==n/2)
		return;	
	
	niza[a]=niza[a]+niza[n-a-1];

	rekurzivna(niza,n, ++a);
}

// da si gi smenat mestata prvata so polednata itn.
// 5 3 2 8
// 8 2 3 5
void rekurzivna1(int *niza,int a, int b)
{
	if(a==b || a>b)
		return;	
	
	int tmp = niza[a];
	niza[a] = niza[b];
	niza[b] = tmp;
	
	rekurzivna1(niza,++a, --b);
}

int main()
{
	int i,n;
	int niza[100];

	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		scanf("%d",&niza[i]);
	}

	//rekurzivna(niza,n,0);
	rekurzivna1(niza,0,n-1);

	for(i=0;i<n;i++)
		printf("%d ",niza[i]);
	

	return 0;
}