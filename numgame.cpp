#include<stdio.h>

int Div(int a, int b)
{
return (a>b)?a/b:b/a;
}


int main()
{
int T;
int A1, A2, B1, B2;
int i=0, j, k;
int count;
int result;
int a, b;

scanf("%d", &T);
while(T--)
{
scanf("%d", &A1);
scanf("%d", &A2);

scanf("%d", &B1);
scanf("%d", &B2);
result = 0;
for (j = A1; j <= A2; j++ )
{
for (k = B1; k <= B2; k++)
{
count = 0;
a = j;
b = k;
if (a!= b)
{
while(Div(a, b) == 1)
{
if(a>b)
{
a=a%b;
}
else
{
b=b%a;
}
count++;
}
if (count%2==0)
{
result++;
}
}
}
}

printf("Case #%d: %d\n", i + 1, result);
i++;
}
return 0;
}
