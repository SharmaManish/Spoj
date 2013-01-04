#include<iostream>
#include<math.h>

using namespace std;

int ans(int n)
{
    if(n==3)
    return 3;
    
    else if(n==4)
    return 3;
    
    else if(n==5)
    return 4;
    
    else
    {
        int p=ceil((float)n/2.0);
        return 1+ans(p);
    }
}

int main()
{
    int t,n;
    
    cin>>t;
    
    while(t!=0)
    {
               cin>>n;
               
               int k=ans(n);
               
               cout<<k<<endl;
               
               t--;
               
    }
    
    system ("pause");
    
    return 0;
}
    
