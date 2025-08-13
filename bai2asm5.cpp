#include <stdio.h>

	int n,n2;
	printf("nhap so nguyen n thu nhat: ");
	scanf("%d",&n);
	printf("nhap so nguyen n thu hai: ");
	scanf("%d",&n2);
	
	int uoc = 1;
	int ucln;
	while(uoc <= n){
		if(n % uoc == 0 && n2 % uoc == 0){
			printf("tong cac uoc cua so do la: %d",ucln);
			break;
		}
		uoc--;
	};
	return 0;
}
