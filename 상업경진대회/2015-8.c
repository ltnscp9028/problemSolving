#include <stdio.h>
char a[2][150],tmp,b[1000],l;
i,aa[27];main(){
	for(i=0;i<26;i++){
		scanf("%c",&tmp);
		a[0][tmp] = 'a'+i;
		a[1][tmp] = 'A'+i;
	}
	rewind(stdin);
	fgets(b,1000,stdin);
	rewind(stdin);
	l = strlen(b);
	for(i=0;i<l;i++){
		if(b[i]>='a'&&b[i]<='z')printf("%c",a[0][b[i]]);
		else if(b[i]>='A'&&b[i]<='Z')printf("%c",a[1][b[i]+32]);
		else printf(" ");
	}
}

//e y d b k m i q u g j x l v t z p n w o h r a c s f
//a b c d e f g h i j k l m n o p q r s t u v w x y z


