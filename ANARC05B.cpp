#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int binary_search(int a[],int n,int x)
{
    int beg=0;
    int end=n-1;
    
    while(beg<=end)
    {
                  int mid=(beg+end)/2;
                  
                  if(x==a[mid])
                  return mid;
                  
                  else if(x<a[mid])
                  end=mid-1;
                  
                  else
                  beg=mid+1;
    }
    
    return -1;
}

int main()
{
    while(true)
    {
               int m,n;
               
               scanf("%d",&m);
               
               if(m==0)
               break;
               
               int a[10000],b[10000];
               
               for(int i=0;i<m;i++)
               cin>>a[i];
               
               scanf("%d",&n);
               
               for(int j=0;j<n;j++)
               cin>>b[j];
               
               
               vector<int> v;
               vector<int> v1;
               
               int p=0;
               int sum=0;
               int sum2=0;
               
               for(int i=0;i<m;i++)
               {
                       int loc=binary_search(b,n,a[i]);
                       
                       if(loc==-1)
                       sum=sum+a[i];
                       
                       else
                       {
                           sum=sum+a[i];
                           v.push_back(sum);
                           
                           while(p<=loc)
                           sum2=sum2+b[p],p++;
                           
                           v1.push_back(sum2);
                           sum=0;
                           sum2=0;
                       }
                       
               }
               
               while(p<n)
               sum2=sum2+b[p++];
               
               v1.push_back(sum2);
               v.push_back(sum);
               
              /* for(int i=0;i<v.size();i++)
               cout<<v[i]<<" ";
               
               for(int i=0;i<v1.size();i++)
               cout<<v1[i]<<" ";*/
               
             int ans=0;
               
               for(int i=0;i<v.size();i++)
               {
                       if(v[i]>v1[i])
                       ans=ans+v[i];
                       
                       else
                       ans=ans+v1[i];
                       
               }
               
               cout<<ans<<endl;
               
    }
    
    system ("pause");
    
    return 0;
    
}
                           
                           
                           
                           
                       
                       
                       
                       
                       
                       
    
