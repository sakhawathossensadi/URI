#include<stdio.h>
int main()
{
    int t,i;
    double time,min;
    while(scanf("%d",&t)!=EOF)
    {
        min=100;
        for(i=0;i<t;i++)
        {
            scanf("%lf",&time);
            if(time<min)
            {
                min=time;
            }
        }
        printf("%.2lf\n",min);
    }
    return 0;
}
