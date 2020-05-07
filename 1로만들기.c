/*#define min(X,Y) ((X) < (Y) ? (X) : (Y))  
#define max(X,Y) ((X) > (Y) ? (X) : (Y))  
const int MAX = 1000001;
int dp[1000001];i;
int f(int n){
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
 
    int result = f(n-1) + 1;
    if(n%3 == 0) result = min(result, f(n/3) + 1);
    if(n%2 == 0) result = min(result, f(n/2) + 1);
    dp[n] = result;
    return result;
}
main(){
	int N;
	scanf("%d",&N);
	for(;i<MAX;dp[i++]=-1);
	printf("%d\n",f(N));
}*/

/*s[1000001];N;main(i){
	scanf("%d",&N);
	s[2]=1,s[3]=1;
	for(i=4;i<=N;i++){
		s[i]=s[i-1];
		if(i%3==0&&s[i/3]<s[i])s[i]=s[i/3];
		if(i%2==0&&s[i/2]<s[i])s[i]=s[i/2];
		s[i]++;
	}
	printf("%d",s[N]);
}
*/


char a[10];i;main(){
	char b[10]="abcdefghi";
	for(;i<9;a[i]=b+i++);
}



for(int i=0;i<9;i++){
