#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int min(int x,int y,int z,int w)
{
    int k=(x>y)?y:x;
    k=(k>z)?z:k;
    k=(k>w)?w:k;
    
    return k;
}
    

int main()
{
    while(true)
    {
               string a,b;
               
               cin>>a>>b;
               
               if(a=="*" && b=="*")
               break;
               
               int alen=a.length();
               int blen=b.length();
               
               int INF=alen+blen;
               
               int h[alen+2][blen+2];
               
               h[0][0]=INF;
               
               for(int i=0;i<=alen;i++)
               {
                       h[i+1][1]=i;
                       h[i+1][0]=INF;
               }
               
               for(int j=0;j<=blen;j++)
               {
                       h[1][j+1]=j;
                       h[0][j+1]=INF;
               }
               
               int C='z'+1;
               int da[C];
               
               for(int d=0;d<C;d++)
               da[d]=0;
               
               for(int i=1;i<=alen;i++)
               {
                       int db=0;
                       
                       for(int j=1;j<=blen;j++)
                       {
                               int i1=da[b[j-1]];
                               
                               int j1=db;
                               
                               int d=((a[i-1]==b[j-1])?0:1);
                               
                               if(d==0)
                               db=j;
                               
                               h[i+1][j+1]=min(h[i][j]+d,h[i+1][j]+1,h[i][j+1]+1,h[i1][j1]+(i-i1-1)+1+(j-j1-1));
                       }
                       
                       da[a[i-1]]=i;
               }
               
               printf("%d\n",h[alen+1][blen+1]);
               
    }
    
    system ("pause");
    
    return 0;
}
               
/*               

static public function damerauLevenshteinDistance(a:Array, b:Array, C:uint):uint
{
    var INF:uint = a.length + b.length;
    var H:matrix = new matrix(a.length+2,b.length+2);    
    H[0][0] = INF;
    for(var i:uint = 0; i<=a.length; ++i) {H[i+1][1] = i; H[i+1][0] = INF;}
    for(var j:uint = 0; j<=b.length; ++j) {H[1][j+1] = j; H[0][j+1] = INF;}            
    var DA:Array = new Array(C);
    for(var d:uint = 0; d<C; ++d) DA[d]=0;
    for(var i:uint = 1; i<=a.length; ++i)
    {
        var DB:uint = 0;
        for(var j:uint = 1; j<=b.length; ++j)
        {
            var i1:uint = DA[b[j-1]];
            var j1:uint = DB;
            var d:uint = ((a[i-1]==b[j-1])?0:1);
            if(d==0) DB = j;
            H[i+1][j+1] = Math.min(H[i][j]+d, H[i+1][j] + 1, H[i][j+1]+1, 
                            H[i1][j1] + (i-i1-1) + 1 + (j-j1-1));
        }
        DA[a[i-1]] = i;
    }
    return H[a.length+1][b.length+1];
}*/
