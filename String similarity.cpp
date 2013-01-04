#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
        string s;
        
        cin>>s;
        
        unsigned long long int count=0;
        
        int len=s.length();
        
        count=count+len;
        
        for(int i=1;i<len;i++)
        {
            for(int j=i,k=0;j<len;j++,k++)
            {
                if(s[j]==s[k])
                    count++;
                
                else
                    break;
                
            }
            
        }
        
        cout<<count<<endl;
        
    }
    
    system ("pause");
    
    return 0;
    
}
            
            
