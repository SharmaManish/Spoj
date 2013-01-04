#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    
    unsigned long long x;
    
    scanf("%d",&n);
    
    cin>>x;
    
    unsigned long long a[]={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441,1594323,4782969,14348907,43046721,129140163,387420489,1162261467};
    
    for(int i=0;i<n;i++)
    {
            if(x+a[i]<a[i+1])
            printf("-1\n");
            
            else if(x+a[i]>a[i+1])
            x=x+a[i];
            
            else if(x+a[i]==a[i+1])
            {
                int count=1;
                while(i!=0)
                {
                           printf("%d ",count);
                           i--;
                           count++;
                }
                
                printf("%d\n",count);
                
                printf("%d\n",(count+1));
                
                break;
                
            }
            
    }
    
    system ("pause");
    
    return 0;
}
            
    
    
    
    
    
    
