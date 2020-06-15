#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,maxi,digit;
    string str;
    while(cin>>str)
    {
        int a[10]={0};
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                a[0]=a[0]+1;
            }
            else if(str[i]=='1')
            {
                a[1]=a[1]+1;
            }
            else if(str[i]=='2')
            {
                a[2]=a[2]+1;
            }
            else if(str[i]=='3')
            {
                a[3]=a[3]+1;
            }
            else if(str[i]=='4')
            {
                a[4]=a[4]+1;
            }
            else if(str[i]=='5')
            {
                a[5]=a[5]+1;
            }
            else if(str[i]=='6')
            {
                a[6]=a[6]+1;
            }
            else if(str[i]=='7')
            {
                a[7]=a[7]+1;
            }
            else if(str[i]=='8')
            {
                a[8]=a[8]+1;
            }
            else if(str[i]=='9')
            {
                a[9]=a[9]+1;
            }
        }
        maxi=a[0];
        digit=0;
        for(i=1;i<10;i++)
        {
            if(a[i]>=maxi)
            {
                maxi=a[i];
                digit=i;
            }
        }
        printf("%d\n",digit);
    }
}
