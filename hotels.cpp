#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    int m;
    
    scanf("%d%d",&n,&m);
    
    int a[n];
    
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    long sum=0,now=0;
    int j=0;
    
    for(int i=0;i<n;i++)
    {
            if(now+a[i]<m)
                          now=now+a[i];
            
            else if(now+a[i]==m)
            {
                 now=now+a[i];
                 sum=now;
                 break;
            }
            
            else
            {
                int p;
                p=now;
            while((p+a[i])>m)
            {
                now=now-a[j];
                
                p=now;
                
                if(now+a[i]<m)
                now=now+a[i];
                
                else if(now+a[i]==m)
                {
                     now=now+a[i];
                     sum=now;
                     break;
                }
                
                j++;
                
            }
            }
            
            sum=(sum>now)?sum:now;
            
    }
    
    cout<<sum<<endl;
    
    system ("pause");
    
    return 0;
}
            
                    
                 
