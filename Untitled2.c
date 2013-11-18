#include<stdio.h>

int main()
 {  int jia=0;
	int c=0;
	int i,j,k,s=0,p,n,q,b=0,temp=0;
    char f;
	int t[1010]={0};
	int r[1010]={0};
	int w[1010]={0};
	scanf("%d%d",&n,&k);
	while(k--)
	{
		scanf("%d ",&p);
		 for (i=0;i<2*p;i++)
		 {
            scanf("%d",&t[i]);
         }
           scanf("\n%c",&f);


		 if (f=='=')
		 {
			for (i=0;i<2*p;i++)
				r[t[i]]=1;

		 }
		 else if (f == '<')
		 {
			s++;
			for (i=0;i<p;i++)
			{
				w[t[i]]--;
			}
			for (i=p;i<2*p;i++)
			{
				w[t[i]]++;
			}
		}
		else if (f== '>')
		{
			s++;
			for (i=0;i<p;i++)
			{
				w[t[i]]++;

			}
			for (i=p;i<2*p;i++)
				w[t[i]]--;
		}


	}

	if(s==0)
    { for (i=1;i<=n;i++)
       {if(r[i]==0)
        {temp=i;b++;}
       }
      if(b>1)
          {printf("0");
            goto f;
            }
       else
       {
        printf("%d",temp);goto f;
       }


    }


   for(i=1;i<=n;i++)
	{
      if (r[i]==0)
		{
			if (w[i]==s||w[i]==-s)
			{
				jia=i;
				c++;
			}
		}
	}

	if (c==1)
	{printf("%d",jia);}
	else
    {printf("0");}

	f:return 0;

 }
