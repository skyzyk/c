#include <stdio.h>
int shu[1010],sum[1010];
int main()
{
    int n,m,i,j;
    while (scanf("%d",&n)!=EOF)
    {
        for (i=0;i<n;i++)
        scanf("%d",&shu[i]);
        sum[0]=shu[0];
        for (i=0;i<n;i++)
        {
            m=0;
            for (j=0;j<i;j++)
            {
                if (shu[i]>shu[j])
                {
                    if (m<sum[j])
                    m=sum[j];
                }
            }
            sum[i]=shu[i]+m;
        }
        int ans=0;
        for (i=0;i<n;i++)
        {
            if (ans<sum[i])
            ans=sum[i];
        }


     printf("%d\n",ans);
    return 0;
}
}
