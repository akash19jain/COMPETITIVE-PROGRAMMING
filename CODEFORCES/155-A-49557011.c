/*  AUTHOR:AKASH JAIN
 *   USERNAME:akash19jain
 *   DATE:06/02/2019
 */
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mod 1000000007
int cmp(const void *a, const void *b) { return (*(int *)b - *(int *)a); }
int main() {
  long long n;
  scanf("%lld", &n);
  long long arr[n], max = 0, min, maxc = 0, minc = 0;
  scanf("%lld", &arr[0]);
  max = arr[0];
  min = max;
  for (int i = 1; i < n; i++) {
    scanf("%lld", &arr[i]);
    if (arr[i] > max) {
      max = arr[i];
      maxc++;
    }
    if (arr[i] < min) {
      min = arr[i];
      minc++;
    }
    
  }
  printf("%lld", maxc+minc);
  return 0;
}