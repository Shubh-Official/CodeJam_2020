#include<stdio.h>
#include<string.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    for(z=0;z<t;z++)
    {
        int i,j,k;
        char s[105];
        scanf("%s",s);
        int temp = 0,count=0;
        printf("Case #%d: ",(z+1));
        for(j=0;j<strlen(s);j++)
        {
            if(temp<=(s[j]-'0'))
            {
                for(k=0;k<(s[j]-'0')-count;k++)
                {
                    printf("(");
                    temp += 1;
                }
                count = temp;
            }
            printf("%c",s[j]);
            if(j+1 <= strlen(s)-1)
            {
                if(temp >= (s[j+1]-'0'))
                {
                    for(k=0;k<count-(s[j+1]-'0');k++)
                        printf(")");
                    temp -= (temp-(s[j+1]-'0'));
                    count=temp;
                }
            }
        }
        for(k=0;k<count;k++)
        {
            printf(")");
            temp -= 1;
        }
        printf("\n");
    }
}