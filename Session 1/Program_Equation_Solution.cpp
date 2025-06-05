#include <stdio.h>

int main(){
	int a;
	printf("Nhập a: ");
	scanf("%d", &a);

	int b;
	printf("Nhập b: ");
	scanf("%d", &b);

	int c;
	printf("Nhập c: ");
	scanf("%d", &c);

	if(a + b > c){

	}else{
		if(a + c > b){

		}else{
			if(b + c > a){
				printf("Tam giác");
			}else{
				printf("Không phải tam giác");
			}
		}
	}
}