#include <stdio.h>
#include <string.h>

 int main()
 {
 	int i,j,vr,a,b,resp=0;

   int m [5][7]
   memset(m,0,35)

   scanf("%d",&vr)

   for (i = 0; i < m[5]; ++i)
   {
     for (j = 0; j <m[7]; ++j)
     {

     scanf("%d %d", &a,&b);
	 m[a][b]++;

	if (m[a][b]>1)
	{
		resp =1;
		break;
	}
		resp=0;
     }
   }
 }
  return 0

