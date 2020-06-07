#include <stdio.h>
int main()
{
    int i,a,position=0,max=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
            position=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",position);
    return 0;
}
