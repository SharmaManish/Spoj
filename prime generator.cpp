#include<iostream>
#include<cmath>
#include<stdio.h>
#include<vector>

using namespace std;

void prime(int m,int n)
{
     vector<int> v;
     bool flag=true;
     int p;
     
     v.push_back(2);
     
     if(m<=2)
     {
             printf("%d\n",2);
              m=3;
     }
     
     for(int j=3;j<=n;j++)
     {
             for(int k=0;k<v.size() && v[k]<=sqrt(j);k++)
             {
                     if(j%v[k]==0)
                     goto other;
                                  
             }
             
             v.push_back(j);
             
             other:;
                   
     }
     
     for(int j=1;j<v.size();j++)
     {
             if(v[j]>=m)
             printf("%d\n",v[j]);
     }
}
                         
int main()
{
    int t,m,n;
    
    scanf("%d",&t);
    
    if(t>10)
    return 0;
    
    while(t!=0)
    {
               scanf("%d %d",&m,&n);
               
               if(!(1 <= m <= n <= 1000000000 && n-m<=100000))
                      return 0;
                
                prime(m,n);
                
                printf("\n");
                
                t--;
    }
    
    system ("pause");
    return 0;
}      
