#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int len;
    long long int res;
    char s[100];
    while(1)
    {
        res=1;
        cin>>s;
        if(s[0]=='0')
        {
            break;
        }
        len=strlen(s);
        for(int i=1;i<=len;i++)
        {
            res=res*i;
        }
        printf("%lld\n",res);
    }
    return 0;
}
