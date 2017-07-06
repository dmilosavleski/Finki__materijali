#include <stdio.h>
#include <math.h>

int daliProst(int broj)
{
	int k=1;

	for(int i=2;i<=sqrt(broj);i++)
	{
		if(broj%i==0)
		{
			k=0;
			break;
		}
	}	

	return k;
}


int brojPomaliProst(int broj)
{
	if(broj==1)
		return 1;

	return daliProst(broj) + brojPomaliProst(broj-1);
}

int main()
{
	int broj;
	scanf("%d",&broj);
	printf("Brojot na prosti broevi pomali od %d e %d\n",broj,brojPomaliProst(broj));
	return 0;
}