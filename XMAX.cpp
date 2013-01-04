#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    
    scanf("%d",&n);
    
    vector<long long> v;
    long long x;
    for(int i=0;i<n;i++)
    {
            scanf("%lld",&x);
            v.push_back(x);
    }
    
    sort(v.rbegin(),v.rend());
    
    long long int sig=1;
    
    while(sig<=v[0])
    sig<<=1;
    
    sig>>=1;
    
    for(int t=0;sig>=1;sig>>=1)
    {
            int i=t;
            
            while(i<n && (v[i]&sig)==0)
            i++;
            
            if(i>=n)
            continue;
            
            swap(v[t],v[i]);
            
            for(int j=0;j<n;++j)
            {
                    if(j!=t && (v[j]&sig)!=0)
                    v[j]=v[j]^v[t];
            }
            
            t++;
            
    }
    
    long long int result=0;
    
    for(int q=0;q<n;q++)
    {
            result=result^v[q];
    }
    
    printf("%lld\n",result);
    
    system ("pause");
    
    return 0;
}
    
