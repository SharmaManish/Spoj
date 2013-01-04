#include <iostream>
#include<stdio.h>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
 
#define llong long long
const llong MOD=1000000007;
 
llong sum[26];
 
int main() {
int tc;
cin>>tc;
while(tc--) {
string s;
cin>>s;
int n=s.size();
 
memset(sum,0,sizeof(sum));

sum[s[0]-'A']=1;
llong ret=2;
 
for(int i=1;i<n;i++) {
int idx=s[i]-'A';
llong tmp=(ret-sum[idx]+MOD)%MOD;
ret=(ret+tmp)%MOD;
sum[idx]=(sum[idx]+tmp)%MOD;
}
 
cout<<ret<<endl;
}
}
