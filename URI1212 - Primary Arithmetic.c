#include<stdio.h>
int main()
{
    int a,b,count,r1,r2,sum,carry;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
        {
            break;
        }
        count=0;
        carry=0;
        while(a || b)
        {
            r1=a%10;
            r2=b%10;
            a=a/10;
            b=b/10;
            sum=r1+r2+carry;
            if(sum>9)
            {
                carry=1;
                count++;
            }
            else
            {
                carry=0;
            }
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("%d carry operation.\n",count);
        }
        else
        {
            printf("%d carry operations.\n",count);
        }
    }
    return 0;
}
