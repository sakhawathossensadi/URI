#include<stdio.h>
#include<string.h>
int main()
{
    int len,lflag,clflag,slflag,dflag,eflag,i;
    char str[100];
    while(gets(str))
    {
        lflag=0;
        clflag=0;
        slflag=0;
        dflag=0;
        eflag=0;
        len=strlen(str);
        if(len<6 || len>32)
        {
            printf("Senha invalida.\n");
        }
        else
        {
                for(i=0; i<len; i++)
                {
                    if(str[i]>='A' && str[i]<='Z')
                    {
                        clflag=1;
                    }
                    else if(str[i]>='a' && str[i]<='z')
                    {
                        slflag=1;
                    }
                    else if(str[i]>='0' && str[i]<='9')
                    {
                        dflag=1;
                    }
                    else
                    {
                        eflag=1;
                        break;
                    }
                }
            if(clflag==1 && slflag==1 && dflag==1 && eflag==0)
            {
                printf("Senha valida.\n");
            }
            else
            {
                printf("Senha invalida.\n");
            }
        }
    }
    return 0;
}
