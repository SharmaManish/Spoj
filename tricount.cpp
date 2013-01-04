#include<iostream>
using namespace std;
int main()
{int t,n;scanf("%d\n",&t);while(t!=0){
               scanf("%d\n",&n);if(n%2==0)
               {long long unsigned int k=(n+2)/8;k=k*n*(2*n+1);cout<<k<<endl;}
               
               else
               {long long unsigned int k=(2*n+1)/8;k=k*n*(n+2);cout<<k<<endl;}
               t--;
    }
    
    system ("pause");
    return 0;
    
}
    
