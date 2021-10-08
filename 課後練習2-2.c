#include <stdio.h>

int main(void)
{
 int cm,kg;
  printf("%s","a=");
  scanf("%d%d",&cm,&kg);
  printf("%f\n",cm/2.54);
  printf("%f\n",kg/0.454);
} 
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n=0,m=0;
   scanf("%d",&n);
   if (n%2!=0)
   {
       while (n%2!=0)
       {
            m++;
            n/=n;
       }
   }
   
   printf("%d",&m);
}*/