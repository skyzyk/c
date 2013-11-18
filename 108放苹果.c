#include<stdio.h>
int f[11][11];
int z[21];
int m,n,k,i,j,t;
int fpg(int a,int b)
{
 if(a==1||b==1){return 1;}
 if(a<b){f[a][b]=f[a][a];return fpg(a,a); }
 if(a==b){f[a][b]=1+f[a][a-1];return (1+fpg(a,a-1));}
 if(a>b){f[a][b]=f[a-b][b]+f[a][b-1];return (fpg(a-b,b)+fpg(a,b-1));}
}
int main()
{scanf("%d",&t);
for(k=1;k<=t;k++)
{
  scanf("%d%d",&m,&n);
  z[k]=fpg(m,n);
}
   for(k=1;k<=t;k++)
{
   printf("%d\n",z[k]);
}
return 0;
}
