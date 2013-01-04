#include<iostream>

using namespace std;

struct island
{
       int w,h;
      int bl_map[w][h];
      int b;
      int f;
}

struct rest_area
{
       int xl;
       int yd;
       int xr;
       int yu;
}

struct terminal
{
      string name;
      int x;
      int y;
}

int main()
{
    int m,t,n;
    
    cout<<"no. of tests";
    cin>>t;
    
    cout<<"enter no. of islands";
    cin>>n;
    
    island is[n];
    
    for(int i=0;i<n;i++)
    {
            
            cout<<"enter w and h";
            cin>>is[i].w>>is[i].h;
    
            cout<<"no. of terminals";
            cin>>is[i].b;
            
    }
    
    cout<<"no. of connections";
    cin>>m;

















