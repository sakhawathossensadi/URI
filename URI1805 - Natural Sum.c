#include<stdio.h>
int main()
{
    long long int a,b,asum=0,bsum=0,result;
    scanf("%lld %lld",&a,&b);
    bsum=(b*(b+1))/2;
    a=a-1;
    asum=(a*(a+1))/2;
    result=bsum-asum;
    printf("%lld\n",result);
    return 0;
}
