#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define len 1005
int n,k,num;
int coin[len],wrong[len];
bool real[len];
void decide(char ch,intm)
{
    int i;
    if(ch=='=')
        for(i=0;i<m;i++)
            real[coin[i]]=true;
    else if(ch=='<'){
        num++;
        for(i=0;i<m/2;i++)
            wrong[coin[i]]--;
        for(i=m/2;i<m;i++)
            wrong[coin[i]]++;
    }
    else{
        num++;
        for(i=0;i<m/2;i++)
            wrong[coin[i]]++;
        for(i=m/2;i<m;i++)
            wrong[coin[i]]--;
    }
}
void deal(){
    int m,i;
    char ss[2];
    num=0;
    memset(real,false,sizeof(real));
    memset(wrong,0,sizeof(wrong));
    while(k--){
        scanf("%d",&m);
        m*=2;
        for(i=0;i<m;i++)
            scanf("%d",&coin[i]);
        scanf("%s",ss);
        decide(ss[0],m);
    }
}
void output(){
    int i,c=0,record;
    for(i=1;i<=n;i++){
        if(real[i])   continue;
        if(wrong[i]==num||-wrong[i]==num){
            c++;
            record=i;
        }
    }
    if(c==1)    printf("%d\n",record);
    else        puts("0");
}
int main(void){
    while(scanf("%d%d",&n,&k)==2){
        deal();
        output();
    }
    return 0;
}
