#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so nguyen n: ");
	scanf("%d",&n);
	
	int uoc = 1;
	int tonguoc = 0;
	while(uoc <= n){
		if(n % uoc == 0){
			tonguoc += uoc;
		}
		uoc++;
	};
	printf("tong cac uoc cua so do la: %d",tonguoc);
	return 0;
}
