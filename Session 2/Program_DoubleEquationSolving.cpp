#include <stdio.h>
#include <math.h>

int main(){

	int a;
	printf("Enter number a: ");
	scanf("%d", &a);

	int b;
	printf("Enter number b: ");
	scanf("%d", &b);

	int c;
	printf("Enter number c: ");
	scanf("%d", &c);

	int x;

	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Vô số nghiệm");
			}else
				printf("Vô nghiệm");
		}else{
			printf("x = -c / b");
			scanf("%d", &x);
		}
	}else{
		int d;
		d = b*b - 4*a*c;
		if(d < 0){
			printf("Phương trình vô nghiệm");
		}else{
			if(d == 0){
				int x;
				x = -b / (2*a);
				printf("x=%d", x);
			}else{
				float x1, x2;
				x1 = (-b + sqrt(d)) / (2*a);
				x2 = (-b - sqrt(d)) / (2*a);
				printf("x1 = %f x2 = %f", x1, x2);
			}
		}
	}
}