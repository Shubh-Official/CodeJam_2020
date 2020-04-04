#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,z;
    cin>>t;
    for(z=0;z<t;z++)
    {
        int i,j,k;
        char s[105];
        cin>>s;
        int temp = 0,count=0;
        cout<<"Case #"<<(z+1)<<": "; 
        for(j=0;j<strlen(s);j++)
        {
            if(temp<=(s[j]-'0'))
            {
                for(k=0;k<(s[j]-'0')-count;k++)
                {
                    cout<<"(";
                    temp += 1;
                }
                count = temp;
            }
            cout<<s[j];
            if(j+1 <= strlen(s)-1)
            {
                if(temp >= (s[j+1]-'0'))
                {
                    for(k=0;k<count-(s[j+1]-'0');k++)
                        cout<<")";
                    temp -= (temp-(s[j+1]-'0'));
                    count=temp;
                }
            }
        }
        for(k=0;k<count;k++)
        {
            cout<<")";
            temp -= 1;
        }
        cout<<"\n";
    }
}