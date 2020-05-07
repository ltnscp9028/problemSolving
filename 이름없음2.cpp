long long p; long long q;long long w; main() {
	scanf("%lld %lld %lld", &p, &q, &w);
	printf("%lld %lld", w/p, (w%p)/q);
}
