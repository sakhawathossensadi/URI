#include<stdio.h>
int main()
{
    int c1,b1,p1,c2,b2,p2,sum=0;
    scanf("%d %d %d",&c1,&b1,&p1);
    scanf("%d %d %d",&c2,&b2,&p2);
    if(c1<c2)
    {
        sum=sum+(c2-c1);
    }
    if(b1<b2)
    {
        sum=sum+(b2-b1);
    }
    if(p1<p2)
    {
        sum=sum+(p2-p1);
    }
    printf("%d\n",sum);
    return 0;
}
