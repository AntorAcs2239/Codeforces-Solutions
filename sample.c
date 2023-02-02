#include<stdio.h>
int main()
{
   int ar[3][3];
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           if(i==j)ar[i][j]=1;
           else ar[i][j]=0;
       }
   }
    for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           printf("%d",ar[i][j]);
       }
       printf("\n");
   }
}