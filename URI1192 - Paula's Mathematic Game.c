#include<stdio.h>
int main()
{
    int re,i,t,val,a,b;
    char str[10];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(str);
        val=str[0];
        a=val-48;
        val=str[2];
        b=val-48;
        if(a==b)
        {
            printf("%d\n",a*b);
        }
        else if(str[1]>='A' && str[1]<='Z')
        {
            printf("%d\n",b-a);
        }
        else
        {
            printf("%d\n",a+b);
        }
    }
    return 0;
}
