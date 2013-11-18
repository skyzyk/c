#include<stdio.h>
#define N 1010
int m[N]={0},a[N]={0};
int max(int x[1010],int y)
{
    int temp,i;
    for(i=1;i<=y-1;i++)
     {if(x[i+1]<x[i])
      {
          temp=x[i];
          x[i]=x[i+1];
          x[i+1]=temp;
      }
      else  continue;
     }
    return x[y];
}
int main()
{
    int k,i,j;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
        scanf("%d",&a[i]);
    for(j=k;j>=1;j--)
    {
        if(a[j]<a[i])m[i]=max(m[1010],j)+a[i];
    }
    printf("%d",max(m[1010],k));
    return 0;

}


