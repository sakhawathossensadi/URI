#include<stdio.h>
int main()
{
    int i,j,r,mul,p,k,w,max;
        scanf("%d %d",&j,&r);
        int arr[510];
        for(i=0; i<j; i++)
        {
            arr[i]=0;
        }
        for(i=0; i<j*r; i++)
        {
            scanf("%d",&p);
            arr[i%j]+=p;
        }
        max=arr[0];
        w=0;
        for(i=1; i<j; i++)
        {
            if(arr[i]>=max)
            {
                max=arr[i];
                w=i;
            }
        }
        printf("%d\n",w+1);
    return 0;
}
