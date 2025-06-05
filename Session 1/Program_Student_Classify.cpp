#include <stdio.h>

int main(){
	int d;
	printf("Nhập điểm học sinh: ");
	scanf("%d", &d);

	if(d>=9){
		printf("Học sinh xuất sắc");
	}else{
		if(d>=8){
			printf("Học sinh giỏi");
		}else{
			if(d>=7){
				printf("Học sinh khá");
			}else{
				if(d>=5){
					printf("Học sinh trung bình");
				}else{
					printf("Cút");
				}
			}
		}
	}
}