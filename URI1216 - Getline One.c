#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    double dis,tdis=0;
    double avgdis;
    char name[100];
    while(gets(name))
    {
        scanf("%lf",&dis);
        getchar();
        tdis=tdis+dis;
        count++;
    }
    avgdis=tdis/count;
    printf("%.1lf\n",avgdis);
    return 0;
}
