#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    return b;
    
    return gcd(b%a,a);
}

int main()
{
    int n;
    
    scanf("%d",&n);
    
    int a[n];
    
    vector<int> v;
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=1;i<n;i++)
    {
            v.push_back(a[i]-a[i-1]);
    }
    
    vector<int>::iterator it;
    
    sort(v.begin(),v.end());
    
    int result=0;
    
    for(int i=0;i<v.size();i++)
    result=gcd(result,v[i]);
    
    int sum=0;
    
    for(int i=0;i<v.size();i++)
    {
            sum=sum+(v[i]/result)-1;
    }
    
    printf("%d\n",sum);
    
    system ("pause");
    
    return 0;
}
            
            
            
            
