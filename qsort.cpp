#include <stdio.h>
#include<iostream>
#include <stdlib.h>

using namespace std;

struct node
{
       int key;
};

node values[] = { 40, 10, 100, 90, 20, 25 };

int compare (const void * a, const void * b)
{
  return ( *(node*)a->key - *(node*)b->key );
}

int main ()
{
  int n;
  qsort (values, 6, sizeof(node), compare);
  for (n=0; n<6; n++)
     printf ("%d ",values[n]);
  return 0;
}
