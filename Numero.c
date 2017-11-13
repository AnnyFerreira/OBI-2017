#include <stdio.h>
#define TAM 10005

	 Int v [TAM];
	 int main()
	
{
	Int n,maior;

    scanf("%d",&n);

	for (int=i; i<n; i++)
	{

	 scanf("%d",&v[i]);
	}
	maior = -1;
	for(int i=0; i<n; i++)
	{
		if(v[i] >maior)
			maior=v[i];
	}
	printf("%s\n", maior);
	
	return 0;
}