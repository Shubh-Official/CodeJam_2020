#include<stdio.h>
int main(){
   int t,z;
   scanf("%d",&t);
   for(z=0;z<t;z++){
        int n,i,j,k,flag=0,ce=0,je=0;
        scanf("%d",&n);
        int a[n][4];
        for(i=0;i<n;i++){
            for(j=0;j<2;j++)
                scanf("%d",&a[i][j]);
            a[i][2]=i+1;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j][0]>a[j+1][0])
                {
                    for(k=0;k<3;k++)
                    {
                        int swap = a[j][k];
                        a[j][k] = a[j+1][k];
                        a[j+1][k] = swap;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i][0]>=ce)
            {
                a[i][3] = 67;
                ce = a[i][1];
            }
            else if(a[i][0]>=je)
            {
                a[i][3] = 74;
                je = a[i][1];
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            printf("Case #%d: IMPOSSIBLE\n",z+1);
        else
        {
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i-1;j++)
                {
                    if(a[j][2]>a[j+1][2])
                    {
                        for(k=0;k<3;k++)
                        {
                            int swap = a[j][k];
                            a[j][k] = a[j+1][k];
                            a[j+1][k] = swap;
                        }
                    }
                }
            }  
            printf("Case #%d: ",z+1);
            for(i=0;i<n;i++)
                printf("%c",a[i][3]);
            printf("\n");
        }
   }
}