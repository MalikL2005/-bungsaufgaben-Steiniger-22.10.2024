#include <stdio.h>
#include <string.h>

int string_to_int(char c){
	int ret = c - 48; // 48 because ASCII "0" is 48, "1" is 49, ...
	return ret; 
}

void main(){
	int sum = 0; 
	int current;
	while(1){
		printf("give a number; 0 breaks\n");
		scanf("%d", &current);
		if (current == 0){break;}
		//convert int to str using sprinf
		char str[10];
		sprintf(str, "%d", current);
		int len = strlen(str);
		//iterate over "numer"-chars of str
		for (int i=0; i<len; i++){
			//printf(" %c\n", str[i]);
			sum += string_to_int(str[i]);
		}
		printf("%d\n", sum);
	}
	printf("\nBye bye...");
}
