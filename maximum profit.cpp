#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,m,n;
    
    scanf("%d",&t);
    
    while(t--)
    {
            scanf("%d%d",&m,&n);
            
            int a[m][n];
            int b[m][n];
            long long int c[m][n];
            
            for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
                    
            for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
                    
            for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            cin>>c[i][j];
               
            unsigned long long int sum=0;     
            
            for(int i=0;i<n;i++)
            {
                    unsigned long long int now;
                    if(a[0][i]>=b[0][i])
                    now=b[0][i]*c[0][i];
                    
                    else
                    now=a[0][i]*c[0][i];
                    
                    sum=(sum>now)?sum:now;
            }
            
            unsigned long long int sum2=0;
            
            for(int i=0;i<n;i++)
            {
                    unsigned long long int now;
                    if(a[1][i]>=b[1][i])
                    now=b[1][i]*c[1][i];
                    
                    else
                    now=a[1][i]*c[1][i];
                    
                    sum2=(sum2>now)?sum2:now;
            }
                   
            cout<<sum+sum2<<endl;
            
    }
    
    system ("pause");
    
    return 0;
}
                    
                    
                    
                    
                    
