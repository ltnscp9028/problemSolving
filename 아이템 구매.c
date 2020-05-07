#include <stdio.h>
i ;a;double x[300000];double y[300000]; double xsum;double ysum;main(){
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%lf %lf",&x[i],&y[i]);
		xsum+=x[i];
		ysum+=y[i];
	}
	printf("%lf %lf",xsum/a,ysum/a);
return 0;
}
