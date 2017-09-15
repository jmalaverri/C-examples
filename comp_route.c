#include <stdio.h>

int main() {
  unsigned short dist[5][5] = { {00, 15, 30, 05, 12},
                                {15, 00, 10, 17, 28},
                                {30, 10, 00, 03, 11},
                                {05, 17, 03, 00, 80},
                                {12, 28, 11, 80, 00} };
  unsigned short i, n, v[7] = {1, 2, 3, 2, 5, 1, 4};
  unsigned int d=0;
  
  n = 7;
  if (n<=7) {    
    printf("\ti\td\tv[i]\tdist[v[i]-1,v[i+1]-1]\n");
    for(i=0;i<n-1; i++) 
    {      
      d = d + dist[v[i]-1][v[i+1]-1];      
      printf("\t%hu\t%hu\t%hu\t\t%hu\n", i, d, v[i], dist[v[i]-1][v[i+1]-1]);
    }
    printf("Total: %d\n", d);
  }

  return 0;
}

