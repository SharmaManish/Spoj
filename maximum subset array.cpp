#include<iostream>
#include<set>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n;
              
              scanf("%d",&n);
              
              long long int a[n];
              
              for(int i=0;i<n;i++)
              cin>>a[i];
              
              set<int> s;
              
              long long int max=a[0];
              int j=0;
              
              for(int i=1;i<n;i++)
              {
                      if(max<a[i])
                      {
                                  max=a[i];
                                  j=i;
                      }
                      
              }
              
              a[j]=-1;
              
              s.insert(max);int p;
              
              unsigned long long int sum=0;
              
              if(max>=0)
              {
                        sum=max;
              
                        for(int i=0;i<n;i++)
                        {
                                if(a[i]>=0)
                                {
                                           sum=sum+a[i];
                                           s.insert(a[i]);
                                }
                      
                      }
              
                      p=s.size();
              
                      unsigned long long int q=1;
              
                      for(int i=0;i<=p-1;i++)
                      {
                              q=q*2;
                              q=q%1000000009;
                              }
              }
              
              if(max>=0)
              cout<<sum<<" "<<q<<endl;
              
              else
              cout<<max<<" "<<q<<endl;
              
    }
              
              system ("pause");
              
              return 0;
              
}
              
              
