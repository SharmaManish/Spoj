using namespace std; 
#include<iostream> 
#include<cstdio> 
#include<cstring> 
#include<algorithm> 
#include<vector> 
#include<limits> 
#include<queue> 
#include<map> 
#define LLU long long unsigned int 
#define LLD long long double 
#define FOR(i,N) for(int i=0;i<(N);i++) 
int MAX=numeric_limits<int>::max(); 
int myarrx[]={-1,0,1,0}; 
int myarry[]={0,-1,0,1}; 
int cnt[210][210],R,C; 
void init_cnt(); 
vector<string>inp; 
void fill() 
{ 
    int x,y,xc,yc; 
    map<pair<int,int>, bool> vis; 
    pair<int,int> temp; 
    pair<int,int> child; 
    queue<pair<int,int> > q; 
    FOR(i,R) 
    FOR(j,C) 
    if(inp[i][j]=='1') 
    { 
        cnt[i][j]=0; 
        temp=make_pair(i,j); 
        q.push(temp); 
    } 
    while(!q.empty()) 
    { 
        temp=q.front(); 
        q.pop(); 
        x=temp.first,y=temp.second; 
        for(int i=0;i<4;i++) 
        { 
            xc=x+myarrx[i],yc=y+myarry[i]; 
            if(xc>=0 && xc<R && yc>=0 && yc<C && cnt[xc][yc]>cnt[x][y]+1) 
            { 
                child=make_pair(xc,yc); 
                        cnt[xc][yc]=cnt[x][y]+1; 
                        q.push(child); 
            } 
        } 
    } 
} 
int main() 
{ 
    int t; 
    string temp; 
    cin>>t; 
    while(t!=0) 
    { 
        inp.clear(); 
        cin>>R>>C; 
        FOR(i,R) 
        { 
            cin>>temp; 
            inp.push_back(temp); 
        } 
        init_cnt(); 
        fill(); 
        FOR(i,R) 
        { 
            cout<<cnt[i][0]; 
            for(int j=1;j<C;j++) 
            cout<<" "<<cnt[i][j]; 
            cout<<endl; 
        }
        
        t--;
    } 
    
    return 0;
} 
void init_cnt() 
{ 
    FOR(i,R) 
    FOR(j,C) 
    cnt[i][j]=MAX; 
}
