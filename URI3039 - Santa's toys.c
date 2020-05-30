#include<stdio.h>
#include<string.h>
int main()
{
    int b=0,g=0,t,i;
    char name[100],gen[10];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        scanf("%s %s",&name,&gen);
        if(gen[0]=='M')
        {
            b++;
        }
        else
        {
            g++;
        }
    }
    printf("%d carrinhos\n",b);
    printf("%d bonecas\n",g);
    return 0;
}
