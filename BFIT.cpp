// URL : https://www.spoj.pl/problems/BFIT/

#include <algorithm>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <unistd.h>
using namespace std;
#define VAR(a,b) __typeof(b) a=(b)
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
#define FOREACH(it,c) for(VAR(it,(c).begin());it!=(c).end();++it)
typedef long long LL; typedef unsigned long long ULL;
typedef long double LD;
const int INF = 1000000001; const LL INFLL = LL(INF) * LL(INF);
template<class T> inline int size(const T&c) { return c.size(); }
inline bool myisspace(char c) { return c>=0 && c<=' '; }

class INPUT {
  static const int BUFSIZE = 1<<16;
  static char buffer[];
  char *bufpos;
  char *bufend;
  void grabBuffer();
 public:
  INPUT() { grabBuffer(); }
  bool eof() { return bufend==buffer; }
  char nextChar() { return *bufpos; }
  inline char readChar();
  inline void skipWS();
  inline unsigned readUnsigned();
  inline int readInt();
  inline ULL readULL();
  inline LL readLL();
  inline void readString(char *p);
  inline string readString(int maxlen=100);
};

char INPUT::buffer[INPUT::BUFSIZE];

void INPUT::grabBuffer() {
  bufpos = buffer;
  bufend = buffer + read(0, buffer, BUFSIZE);
}

char INPUT::readChar() {
  char res = *bufpos++;
  if(bufpos==bufend) grabBuffer();
  return res;
}

void INPUT::skipWS() {
  while(!eof() && myisspace(nextChar())) readChar();
}

unsigned INPUT::readUnsigned() {
  skipWS();
  unsigned res = 0;
  while(!eof() && isdigit(nextChar())) {
    res = 10u * res + (readChar()-'0');
  }
  return res;
}

int INPUT::readInt() {
  skipWS();
  bool neg = false;
  if(!eof() && nextChar()=='-') { neg=true; readChar(); }
  int res = static_cast<int>(readUnsigned());
  if(neg) res = -res;
  return res;
}

ULL INPUT::readULL() {
  skipWS();
  ULL res = 0;
  while(!eof() && isdigit(nextChar())) {
    res = 10u * res + (readChar()-'0');
  }
  return res;
}

LL INPUT::readLL() {
  skipWS();
  bool neg = false;
  if(!eof() && nextChar()=='-') { neg=true; readChar(); }
  LL res = static_cast<LL>(readUnsigned());
  if(neg) res = -res;
  return res;
}

void INPUT::readString(char *p) {
  skipWS();
  while(!eof() && !myisspace(nextChar())) *p++ = readChar();
  *p = 0;
}

string INPUT::readString(int maxlen) {
  char buf[maxlen+1];
  readString(buf);
  return string(buf);
}

class OUTPUT {
  static const int BUFSIZE = 1<<16;
  static char buffer[];
  char *bufpos;
  char *BUFLIMIT;
  void flushBuffer();
 public:
  OUTPUT():bufpos(buffer),BUFLIMIT(buffer+BUFSIZE-100) {}
  ~OUTPUT() { flushBuffer(); }
  inline void operator()(char c);
  inline void operator()(unsigned x);
  inline void operator()(int x);
  inline void operator()(ULL x);
  inline void operator()(LL x);
  inline void operator()(const char*s);
  void operator()(const string&s) { operator()(s.c_str()); }
  inline void print(double d, int prec);
  template<class A,class B>
  void operator()(const A& a,const B& b) {
    operator()(a); operator()(b);
  }
  template<class A,class B,class C>
  void operator()(const A& a,const B& b,const C&c) {
    operator()(a); operator()(b); operator()(c);
  }
  template<class A,class B,class C,class D>
  void operator()(const A& a,const B& b,const C&c,const D&d) {
    operator()(a); operator()(b); operator()(c); operator()(d);
  }
  template<class A,class B,class C,class D,class E>
  void operator()(const A& a,const B& b,const C&c,const D&d,const E&e) {
    operator()(a); operator()(b); operator()(c); operator()(d); operator()(e);
  }
  template<class A,class B,class C,class D,class E,class F>
  void operator()(const A& a,const B& b,const C&c,const D&d,const E&e,const F&f) {
    operator()(a); operator()(b); operator()(c); operator()(d); operator()(e); operator()(f);
  }
};

char OUTPUT::buffer[OUTPUT::BUFSIZE];

void OUTPUT::flushBuffer() {
  char *p = buffer;
  while(p < bufpos) {
    p += write(1, p, bufpos-p);
  }
  bufpos = buffer;
}

void OUTPUT::operator()(char c) {
  *bufpos = c;
  ++bufpos;
  if(bufpos >= BUFLIMIT) flushBuffer();
}

void OUTPUT::operator()(unsigned x) {
  char *old = bufpos;
  do {
    *bufpos = char('0' + x % 10u);
    x /= 10u;
    ++bufpos;
  } while(x);
  reverse(old, bufpos);
  if(bufpos >= BUFLIMIT) flushBuffer();
}

void OUTPUT::operator()(int x) {
  if(x<0) { operator()('-'); x = -x; }
  operator()(static_cast<unsigned>(x));
}

void OUTPUT::operator()(ULL x) {
  char *old = bufpos;
  do {
    *bufpos = char('0' + x % 10u);
    x /= 10u;
    ++bufpos;
  } while(x);
  reverse(old, bufpos);
  if(bufpos >= BUFLIMIT) flushBuffer();
}

void OUTPUT::operator()(LL x) {
  if(x<0) { operator()('-'); x = -x; }
  operator()(static_cast<ULL>(x));
}

void OUTPUT::operator()(const char*s) {
  while(*s) operator()(*s++);
}

void OUTPUT::print(double d, int prec) {
  char buf[100];
  sprintf(buf, "%.*f", prec, d);
  operator()(buf);
}

INPUT input;
OUTPUT output;



int main()
{
	int tc;
	tc = input.readInt();
	while(tc--)
	{
			   int n;
			   double nm = 0.0, dn = 0.0;
			   double xbar = 0.0, ybar = 0.0;
			   n = input.readInt();
			   LL sv[n + 1];
			   for(int i = 1; i <= n; ++i){sv[i] = input.readLL(); xbar += i; ybar += sv[i];}
 		   	   xbar /= 1.0 * n;
 		   	   ybar /= 1.0 * n;
			   for(int i = 1; i <= n; ++i)
			   {
					   nm += (double)(i - xbar) * (sv[i] - ybar);
					   dn += (double)(i - xbar) * (i - xbar);
 		   	   }
 		   	   double a1 = nm / dn;
 		   	   double a2 = ybar - a1 * xbar;
 		   	   printf("%.4lf %.4lf\n", a1, a2);
 	}
	return 0;
}
