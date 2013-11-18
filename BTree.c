#include<stdio.h>
typedef struct BiTNode
{
  int lch,rch,fa;
}BiTNode;
 BiTNode a[101];
int main()
{
    int t,m,n,i,j,l,r,tn,type,x,y,z,temp1,temp2,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        for(j=1;j<=n;j++)
        {
            scanf("%d%d%d",&tn,&l,&r);
            if(l==-1)a[tn].lch=-1;
            else
             {
               a[tn].lch=l;
               a[l].fa=tn;
             }
            if(r==-1) a[tn].rch=-1;
            else
             {
                 a[tn].rch=r;
                 a[r].fa=tn;
             }

        }
        for(j=1;j<=m;j++)
        {scanf("%d",&type);
            if(type==1)
              {scanf("%d%d",&x,&y);
                temp1=a[x].fa;
                temp2=a[y].fa;
                temp=temp1;
                temp1=temp2;
                temp2=temp;

                if(a[temp1].lch==x&&a[temp2].lch==y)
                {
                   a[temp1].lch=y;
                   a[temp2].lch=x;

                }
                else if(a[temp1].lch==x&&a[temp2].rch==y)
                {
                   a[temp1].lch=y;
                   a[temp2].rch=x;

                }
                else if(a[temp1].rch==x&&a[temp2].lch==y)
                {
                   a[temp1].rch=y;
                   a[temp2].lch=x;

                }
                else

                {
                   a[temp1].rch=y;
                   a[temp2].rch=x;

                }


              }
         else
         {
             scanf("%d",&z);
             while(a[z].lch!=-1)
             {
                 z=a[z].lch;
             }
             printf("%d\n",z);
         }
        }

    }

    return 0;
}
