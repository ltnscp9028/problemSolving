char a[52],b[52];p,q,j,i,ans=5e9,cnt;main(){
	scanf("%s%s",a,b);
	p=strlen(a);
	q=strlen(b);
	for(i=-1;++i<=q-p;ans=ans>cnt?cnt:ans)
		for(cnt=0,j=-1;j++<p;a[j]^b[j+i]?cnt++:0);
	printf("%d",ans);
}
