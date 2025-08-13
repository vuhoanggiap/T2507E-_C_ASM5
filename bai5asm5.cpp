#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so nguyen duong: ");
	scanf("%d",&n);
	
	if(n < 0){
		printf("so da nhap khong hop le!\n");
		return 0;
	}

	int sodu,lonnhat = 0;
	for(int i = n;n > 0;){
		sodu = n % 10;
		if(sodu > lonnhat){
			lonnhat = sodu;
		}
		n = n / 10;
		
	}
	printf("so lon nhat trong so do la: %d",lonnhat);
	return 0;
}
