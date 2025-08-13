#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&n);
	
	int a = n;
	int sodu,tong=0;
	for(int i = 0; n > 0; i++){
		sodu = n % 10;
		n = n / 10;
		tong += sodu;
	};
	printf("tong cac chu so trong so do la: %d",tong);
	return 0;
}
