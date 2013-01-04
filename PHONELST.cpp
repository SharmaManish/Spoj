#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

#define pb push_back
#define pi 3.141592653589793238462643383

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--){
               
               int n;
        scanf("%d",&n);
        if(n==0)
            break;
        vector<int> a;
        long long i,j;
        for(i=0;i<n;i++){
            scanf("%lld",&j);
            a.pb(j);
        }
        sort(a.begin(),a.end());
        int flag=0;
        for(i=1;i<n;i++){
            if(a[i]-a[i-1]>200){
                flag=1;
                break;
            }
        }
        if(2*(1422-a[n-1])>200||a[0]>200)
            flag=1;
        if(flag==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    system ("pause");
    
    return 0;
} 

