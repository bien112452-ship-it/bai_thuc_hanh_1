#include<stdio.h>
int ktra(int N){
	if(N<=0){
		return 0;
	}int s =0;
	for(int i =1; i<N/2; i++){
		if(N%i ==0){
			s+= i;
		}
	}if(s=N){
		return 1;
		
	}return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",ktra(n));
}
