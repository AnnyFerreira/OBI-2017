#include <stdio.h>

int main ()
{
	scanf ("%s", & H);
	int H,i,j,cl,li;

	int M [6] [7];

	for ( i = 0; i <=6; ++i)
	{
		scanf("%d", & cl);

		for (j = 0; j <=7; ++j)
		{
			scanf("%d", & li);
		}
	}
	While(li=="H" && cl=="H")
	{
		if(li=="H")
		{
			li=li+1;
		}
		if(li!="H")
		{
			li=li-1;
		}
		if(cl=="H")
		{
			cl=cl+1;
		}
		if(cl!="H")
		{
			cl=cl-1;
		}
		i++;
	}
	printf("%d" "%d" , cl, li );

	return 0;
}