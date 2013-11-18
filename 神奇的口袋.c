#include <stdio.h>
int a[30]={0},dp[30][50]={0};
int main()
{
    int n = 0,i,j,k;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        dp[i][a[i]] = 1;
    }
    for(i=0;i<n;i++)
      for(j=0;j<i;j++)
        for(k=a[i];k<=40;k++)
          {
              dp[i][k] += dp[j][k - a[i]];
          }
     int sum=0;
     for(i=0;i<n;i++)
       sum+=dp[i][40];
    printf("%d\n", sum);
return 0;
}
