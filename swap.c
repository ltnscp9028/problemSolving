a=2;b=3;main(){
	swap();
	printf("%d %d",a,b);
}
swap(){
at = b ^ a;
b = a ^ b;
a = a ^ b;
}
