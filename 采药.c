#include <stdio.h>
#include <stdlib.h>
void sort(int time[],int value[],int n)
{
    int i,j,temp1,temp2;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(time[i]<time[j])
            {
                temp1=time[i];
                time[i]=time[j];
                time[j]=temp1;
                temp2=value[i];
                value[i]=value[j];
                value[j]=temp2;

            }
        }
}
int main()
{
    void sort(int time[],int value[],int n);
    int l,k,i,max=0,j,v1,t1;
    scanf("%d%d",&l,&k);
    int *time,*value;
    time=(int*)malloc(k*sizeof(int));
    value=(int*)malloc(k*sizeof(int));
    for(i=0;i<k;i++)
    {
        scanf("%d%d",time+i,value+i);
    }
    sort(time,value,k);
    for(i=0;i<k;i++)

    {

        if(time[i]<=l)
        {
            v1=value[i];
            t1=time[i];
            for(j=i+1;j<k;j++)
            {
                v1+=value[j];
                t1+=time[j];
                if(t1>l)
                {
                    t1-=time[j];
                    v1-=value[j];
                    continue;
                }



            }
        if(max<v1)
        {
          max=v1;
        }
        }

    }

printf("%d",max);

return 0;

}

