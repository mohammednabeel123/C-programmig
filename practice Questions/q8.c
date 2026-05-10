#include "common.h"


int main()
{
  int i=5, k=2;

for ( ; ; i++, k--) { 
    if (i%2) continue; 
    ++i;
    if (!k) break; 
}

printf ("%d %d", i, k);
}