#include <stdio.h>

int main(){
	int num;
	printf("Give a number\n");
	scanf("%d", &num);
	for(int i=num; i<num+10; i++){
		printf("%f\n", i*1.19);
	}
	printf("Fakultät :)\n");
	//Fakultät
	int m = num;
	printf("%d", num);
	for(int i=num-1; i>0; i--){
		printf(" * %d", i);
		m *= i;
	}
	printf(" = %d", m);
	return 0; 
}
