#include<stdio.h>
int main()
{
    int t,i,j,k,z;
    scanf("%d",&t);
    for(z=0;z<t;z++)
    {
        int n,d_sum=0,r=0,c=0;
        scanf("%d",&n);
        int matrix[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&matrix[i][j]);
        for(i=0;i<n;i++)
            d_sum+=matrix[i][i];
        for(i=0;i<n;i++)
        {
            int flag=0;
            for(j=0;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                    if(matrix[i][j]==matrix[i][k])
                    {
                        r+=1;
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
                        c+=1;
                        flag=1;
                        break;
                    }
                if(flag==1)
                    break;
            }
        }
        printf("Case #%d: %d %d %d\n",z+1,d_sum,r,c);
    }   
}