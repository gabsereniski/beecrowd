#include <stdio.h>

static int count[1024 * 1024];
static int forbid[1024 * 1024];

int solve (int n, int m)
{
  int i, j;
  for (i = 0; i <= n; i++)
    count[i] = forbid[i] = 0;

  for (i = 0; i <= n; i++) {
    if (count[i] == 0) {
      for (j = 1; j <= m; j++) {
        count[i + j]++;
        forbid[i + j] = j;
      }
    } else if (count[i] == 1) {
      count[i + forbid[i]]++;
      forbid[i + forbid[i]] = forbid[i];
    }
  }
  return count[n];
}

int main (int argc, char **argv)
{
  int n, m;
  while (1) {
    n = m = 0;
    scanf ("%d %d", &n, &m);
    if (n == 0) break;
    printf ("%s\n", solve (n, m) ? "Paula" : "Carlos");
  }
  return 0;
}