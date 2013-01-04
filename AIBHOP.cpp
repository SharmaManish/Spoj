#include <iostream>
using namespace std;
#define MAX 5001
 
typedef char str[ MAX ];
int dp[ 2 ][ MAX ];
 
 
 
int main()
{
	//freopen("f.in", "r", stdin);
	//freopen("pal.out", "w", stdout);
	int t; cin >> t;
	while(t--)
	{
	str s;
		memset(dp, 0, sizeof dp);
		cin >> s;
		int slen = strlen(s);
		for(int i = 1; i < slen; i++)
			for(int j = 0; i + j < slen; j++)
			{
				if(s[ j ] == s[ i + j ])
					dp[ i & 1 ][ j ] = dp[ i & 1 ][ j + 1 ];
				else
					dp[ i & 1 ][ j ] = 1 + min(dp[ (i - 1) & 1 ][ j ], dp[ (i - 1) & 1 ][ j + 1 ]);
			}
 
		cout << dp[ (slen - 1) & 1 ][ 0 ] << endl;
	}
   system ("pause");
	return 0;
}
