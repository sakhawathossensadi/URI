#include<stdio.h>
int main()
{
    int s,f,result,r;
    scanf("%d %d",&s,&f);
    if(s<f)
    {
        result=f-s;
    }
    else if(s>f)
    {
        r=24-s;
        result=r+f;
    }
    else
    {
        result=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",result);
    return 0;
}
