#include <stdio.h>
int a, b, c;
int d[10000] = { 0 };
int count=0, p;

int main() {
	for (a = 1; a <= 1000; a++) {
		for (b = a; b <= 1000; b++) {
			for (c = b; c < (a + b); c++) {
				if (c*c == a * a + b * b) {
					d[a + b + c] += 1;
				}
			}
		}
	}
	for (a = 1; a <= 1000; a++) {
		if (count <= d[a]) {
			count = d[a];
			p = a;
		}
	}
	printf("%d %d", count, p);
}
