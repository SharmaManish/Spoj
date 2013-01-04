#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    long long a,b,c;
    
    while(true)
    {
               
    scanf("%lld%lld%lld",&a,&b,&c);
    
    if(a==0 && b==0 && c==0)
    break;
    
    vector<long long> v;
    
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    
    sort(v.begin(),v.end());
    
    if((v[2]*v[2])==(v[1]*v[1]+v[0]*v[0]))
    printf("right\n");
    
    else
    printf("wrong\n");
    
    }
    
    system ("pause");
    
    return 0;
}
    
    
    
