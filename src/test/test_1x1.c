#include "../main/qcan.h"
#include <string.h>

int main() {
  int f[3][3][4] = {
    { {1,0,0,0}, {0,0,1,0}, {0,1,0,0} },
    { {0,1,0,0}, {0,0,0,1}, {0,0,0,0} },
    { {0,0,1,0}, {0,0,0,0}, {1,0,0,-1} } };
  int d = 3 * 3 * 4;
  size_t dg = d * sizeof(int);
  int *g = (int*)calloc(d, sizeof(int));
  structureTensor(1, 1, g, dg);
  int test = memcmp(f, g, dg);
  free(g);
  return (test == 0) ? 0 : -1;
}
