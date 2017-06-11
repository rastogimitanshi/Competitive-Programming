#include<stdio.h>
#include<math.h>
int IsInteger(double val){
	int truncated=(int)val;
	if(truncated==val)
	return 1;
	else return 0;
}
double root(int input, int n){
	return (pow(input,1.0/n));
	
}
int main(){
	int T, M, N;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		scanf("%d",&M);
		double val=root(M,N);
		if(IsInteger(val))
		printf("%f\n",val);
		else printf("-1\n");
		
	}
	return 0;
	}
