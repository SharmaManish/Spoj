#include<iostream>

using namespace std;

int main()
{
    int N,M;
    
    cin>>N>>M;
    
    char a[N][M];
    int count= 1;
    
    for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
    a[i][j]= count++;
    
    for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
    cout<<a[i][j];
    
    system ("pause");
    
    return 0;
    
}
