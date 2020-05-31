#include <stdio.h>
const long long int mod = 100000000;

int main() {
  long long int n, m,i;
  while (scanf("%lld %lld",&n,&m)) {
    long long int ans = 1;
    for (i = 0; i < m; i++) {
      ans *= n - i;
      while ((ans % 10) == 0) ans /= 10;
      ans %= mod;
    }
    printf("%lld\n",ans%10);
  }
  return 0;
}
