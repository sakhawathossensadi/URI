#include<stdio.h>
int main()
{
    int m,n,flag,reverse,re,sum,d,newsum;
    while(1)
    {
        flag=0;
        scanf("%d %d",&m,&n);
        if(m==0 && n==0)
        {
            break;
        }
        sum=m+n;
        d=sum;
        while(d>0)
        {
            re=d%10;
            if(re==0)
            {
                flag=1;
                break;
            }
            d=d/10;
        }
        if(flag==1)
        {
            d=sum;
            newsum=0;
            reverse=0;
            while(d>0)
            {
                re=d%10;
                if(re!=0)
                {
                    reverse=reverse*10+re;
                }
                d=d/10;
            }
            while(reverse>0)
            {
                re=reverse%10;
                newsum=newsum*10+re;
                reverse=reverse/10;
            }
            sum=newsum;
        }
        printf("%d\n",sum);
    }
    return 0;
}
