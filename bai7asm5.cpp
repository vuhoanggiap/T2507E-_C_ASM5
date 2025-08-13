#include <stdio.h>

int main(){
	int a,b;
	printf("hay nhap so nguyen duong thu nhat(phai nho hon so thu hai): ");
	scanf("%d",&a);
	printf("hay nhap so nguyen duong thu hai: ");
	scanf("%d",&b);
	
	if(a < 2){
		a = 2;
	};
	if(a >= b){
		printf("so nhap vao khong hop le!");
	}
	
	for(int i = a; i <= b;i++){
		int dem = 0;
		for(int uoc = 1;uoc <= i ;uoc++){
			if(i % uoc == 0 ){
				dem++;
			}
		}
		if(dem == 2){
			printf("%d\n",i);
		}
	}
	
}

