#include<stdio.h>
#define SWAP(x,y,z) z=y;y=x;x=z;
void Permutation(char* list, int p, int n)
{
	int i;
	char tmp;
	
	if( p < n ) {
		for( i = p ; i <= n ; i++ ) {
			SWAP(list[p], list[i], tmp);
			Permutation( list, p + 1, n );
			SWAP(list[p], list[i], tmp);
		}
	} else {
		printf("%s\n", list);
	}
	return;
}

int main()
{
	char list[4] = "0123";
	
	Permutation(list, 0, 3);
	
	return 0;
	
}
