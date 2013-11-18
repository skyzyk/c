#include <stdio.h>
#include <string.h>
int f[1010],w[1010],v[1010] ;
int max(int x,int y)
{
  if(x>y) return x;
  else    return y;
}
int main()
{
 int t,m,i,j;
 memset(f,0,sizeof(f));
 scanf("%d %d",&t,&m);
 for (i=1;i<=m;i++) scanf("%d %d",&w[i],&v[i]);//输入所需时间的价值
 for (i=1;i<=m;i++)
    {
      for (j=t;j>=w[i];j--)
      {
        if(w[i]<=t)
        f[j]=max(f[j-w[i]]+v[i],f[j]);
       }
     }
printf("%d",f[t]);
return 0;
}
