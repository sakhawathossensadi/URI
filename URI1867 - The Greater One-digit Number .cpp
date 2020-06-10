#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int value(long long int a)
{
    long long int sum,val,re;
    while(a>9)
    {
        sum=0;
        val=a;
        while(val>0)
        {
            re=val%10;
            sum=sum+re;
            val=val/10;
        }
        a=sum;
    }
    return a;
}

int main()
{
    long long int a1,a2,b1,b2;
    string a,b;
    while(1)
    {
        a1=0;
        a2=0;
        cin>>a>>b;
        if(a=="0" && b=="0")
        {
            break;
        }
        for(int i=0; i<a.size(); i++)
        {
            a1=a1+(a[i]-48);
        }
        for(int i=0; i<b.size(); i++)
        {
            a2=a2+(b[i]-48);
        }
        b1=value(a1);
        b2=value(a2);
        if(b1>b2)
        {
            cout<<"1"<<endl;
        }
        else if(b2>b1)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
