#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
    int t,maximum=0,k,i,len,temp,difference,flag=0;
    char s[60];
    while(1)
    {
        vector<string> arr;
        vector<int> length;
        maximum=0;
        scanf("%d",&t);
        if(t==0)
        {
            break;
        }
        if(flag==1)
        {
            cout<<endl;
        }
        getchar();
        for(k=0; k<t; k++)
        {
            //scanf("%s",&s);
            gets(s);
            len=strlen(s);
            if(len>maximum)
            {
                maximum=len;
            }
            arr.push_back(s);
            length.push_back(len);
        }
        for(k=0; k<t; k++)
        {
            temp=length[k];
            difference=maximum-temp;
            for(i=0; i<difference; i++)
            {
                printf(" ");
            }
            cout<<arr[k]<<endl;
        }
        flag=1;
        //cout<<endl;
    }
    return 0;
}
