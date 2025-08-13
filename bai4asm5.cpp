#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&n);
	
	int a = n;
	int sodu;
	for(int i = n ; n > 0;){
		sodu = n % 10;
		n = n / 10;
		
	};
	printf("so dau tien cua so do la: %d",sodu);
	return 0;
}


