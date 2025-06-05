#include <stdio.h>

int main(){

	int n;
	printf("Enter number n: ");
	scanf("%d", &n);

	int t;

	if(n <= 50){
		t = n*1678;
		printf("Số tiền phải nộp: %d",t);
	}else{
		if(n <= 100){
			t = 50*1678 + (n - 50) * 1734;
			printf("Số tiền phải nộp: %d", t);
		}else{
			if(n <= 200){
				t = 50 * 1678 + 50 * 1734 + (n - 100) * 2014;
				printf("Số tiền phải nộp: %d", t);
			}else{
				t = 50 * 1678 + 50 * 1734 + 100 * 2014 + (n-200) * 2;
				printf("Số tiền phải nộp: %d", t);
			}
		}
	}
}