#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,z;
    cin>>t;
    for(z=0;z<t;z++)
    {
        int n,diagonal=0,row=0,column=0;
        cin>>n;
        int matrix[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>matrix[i][j];
        for(i=0;i<n;i++)
            diagonal+=matrix[i][i];
        for(i=0;i<n;i++)
        {
            int flag=0;
            for(j=0;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                    if(matrix[i][j]==matrix[i][k])
                    {
                        row+=1;
                        flag=1;
                        break;
                    }
                if(flag==1)
                    break;
            }
            
        }
        for(i=0;i<n;i++)
        {
            int flag=0;
            for(j=0;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                    if(matrix[j][i]==matrix[k][i])
                    {
                        column+=1;
                        flag=1;
                        break;
                    }
                if(flag==1)
                    break;
            }
        }
        cout<<"Case #"<<(z+1)<<": "<<diagonal<<" "<<row<<" "<<column<<endl;
    }   
}