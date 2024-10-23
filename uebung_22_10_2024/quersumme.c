#include <stdio.h>
#include <string.h>

int string_to_int(char c){
	int ret = c - 48; // 48 because ASCII "0" is 48, "1" is 49, ...
	return ret; 
}

void quersumme_via_string_conversion(){
	int current;
	int sum = 0; 
	while(1){
		printf("give a number; 0 breaks; str-conversion\n");
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

void quersumme_via_modulo_operator(){
	int current;
	int sum = 0; 
	while(1){
		printf("give a number; 0 breaks; Modulo-operator\n");
		scanf("%d", &current);
		if (current == 0){break;}
		int sum = 0; 
		while(current>0){
			sum += current % 10;
			current /= 10; 
		}
		printf("%d\n", sum);
	}
}

void main(){
	quersumme_via_string_conversion();
	quersumme_via_modulo_operator();
}
