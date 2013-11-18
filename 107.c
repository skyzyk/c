#include<stdio.h>
#include<string.h>
int main()
{char str[1000][14]={},substr[3][1000]={};
 int n=1,i=1,j,c,n0,q,p;
 int zuida[1000]={};
 int len[1000]={};


while(scanf("%c",&str[1][n])!=EOF)
{
  {for(i=1;i<=10;i++)
    {
     scanf("%c",&str[i][n]);
     len[n]++;
     if(str[i][n]==' ')
        {
         break;
        }
   }
  scanf("%s",substr[n]);
  n++;
  }
}
  for(i=1;i<=n-1;i++)
     {for(p=1;p<=len[i]-1;p++)
        {
             if(str[p][i]>str[zuida[i]][i])
             zuida[i]=p;

        }

     }

for(n0=1;n0<=n-1;n0++)
 {for(i=1;i<=zuida[n0];i++)
  {
    printf("%c",str[i][n0]);
  }
  printf("%s",substr[n0]);
  for(i=zuida[n0]+1;i<=len[n0]-1;i++)
  {
    printf("%c",str[i][n0]);
  }

 }
 return 0;
}
