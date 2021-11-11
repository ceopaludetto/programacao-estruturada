long long conta_particoes(int n, int count) {
    if(n == 0) return count;
}


int main() {
  int n;
  scanf("%d", &n);
  
  if (n <= 0) printf("0\n");
  else printf("%lld\n", conta_particoes(n, 1));

  return 0;
}