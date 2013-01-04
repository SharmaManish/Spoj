#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int n;
    
    scanf("%d",&n);
    
    long A,B;
    
    cin>>A>>B;
    
    int arr[50];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    long x=(long)pow(2.0,(double)n);
    
    vector<long long int> v;
    
    for(int i=0;i<x;i++)
    {
            long long int sum=0;
            for(int j=0;j<n;j++)
            {
                    if(i&(1<<j))
                    sum=sum+arr[j];
            }
            
            v.push_back(sum);
            
    }
    
    int count=0;
    
    for(int i=0;i<v.size();i++)
    {
            if(v[i]<=B && v[i]>=A)
            count++;
    }
    
    printf("%d\n",count);
    
    system ("pause");
    
    return 0;
    
}
    
    
            
            
    
    
    
