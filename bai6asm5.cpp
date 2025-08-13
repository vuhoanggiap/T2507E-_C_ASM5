#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so nguyen duong: ");
	scanf("%d",&n);
	
	if(n < 0){
		printf("so da nhap khong hop le!\n");
		return 0;
	}

	int sodu;
	for(int i = n;n > 0;){
		sodu = n % 10;
		if(sodu % 2 == 0){
			printf("tat ca cac so tren khong phai toan bo la so le!\n");
			break;
		}
		n = n / 10;
		
	}
	if(sodu % 2 != 0){
		printf("tat ca cac so tren deu la so le!");
	}
	
	return 0;
}
