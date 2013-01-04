#include<iostream>
using namespace std;
#define u unsigned long long
u z(u n){return n%3==0?n/3:n;}
main()
{
      int p,t;
      u c,n,i,m;
      cin>>t;
      while(t--){
         cin>>p;
         c=0;
         if (p>0){
              n=p;
              c=z(n)*z(n-1)*z(4*n+1)+n*(n+1)*(2*n+1);
              m=(n-1)/2;
              if(n%2)c+=z(m)*z(m+1)*z(4*m+5);
              else c+=z(m)*z(m+1)*(4*m+3);
         }
         cout<<c<<endl;
      }
}
