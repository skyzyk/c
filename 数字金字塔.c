#include<stdio.h>
#define N 1001
int m[N][N]={0},f[N][N]={0};
int max(int x,int y)
{
  if(x>y) return x;
  else    return y;
}
int main()
{int i,j,k;
 scanf("%d",&k);
 for(i=1;i<=k;i++)
   {for(j=1;j<=i;j++)
     {scanf("%d",&m[i][j]);
      f[i][j]=m[i][j];
     }
   }
 for(i=k-1;i>=1;i--)
     {for(j=1;j<=i;j++)
         {
             f[i][j]=max(f[i+1][j],f[i+1][j+1])+m[i][j];

         }
     }

printf("%d",f[1][1]);
return 0;
}

