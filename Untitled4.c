#include<stdio.h>
int main()
{
char str[11][1000];
int i=1;

for(i=1;i<=3;i++)
scanf("%c",&str[i][1]);
for(i=1;i<=3;i++)
printf("%c\n",str[i][1]);
return 0;
}
