#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <sstream>
#include <cmath>
#include <cassert>
#include <memory.h>
 
using namespace std;
 
#define pb push_back
#define mp make_pair
#define sz(a) (int)(a).size()
#define _(a,b) memset((a), (b), sizeof(a))
 
void prepare()
{
 
}
 
long long gcd(long long a, long long b)
{
	return b ? gcd(b, a % b) : a;
}
 
bool solve()
{
	long long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 < 0)
		x1 = -x1;
	if (y1 < 0)
		y1 = -y1;
	if (x2 < 0)
		x2 = -x2;
	if (y2 < 0)
		y2 = -y2;
	long long g1 = gcd(x1, y1), g2 = gcd(x2, y2);
	while (g1 > 0 && g1 < g2)
		g1 *= 2;
	printf(g1 != g2 ? "NO\n" : "YES\n");
	return false;
}
 
int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
    solve();
	return 0;
} 
