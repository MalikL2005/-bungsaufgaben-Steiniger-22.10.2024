#include <stdio.h> 

int main (){
	while (1){
		int num1;
		int num2;
		char op;
		printf("Type 0 to end.\n");
		printf("Give num 1: \n");
		scanf("%d", &num1);
		if (num1 == 0){break;}
		printf("Give operator\n");
		scanf(" %c", &op);
		printf("Give num 2:\n");
		scanf("%d", &num2);
		if (op == '+'){
			printf("%d + %d = %d\n", num1, num2, num1+num2);
		} else if (op == '-'){
			printf("%d - %d = %d\n", num1, num2, num1-num2);
		}
		// same logic for * / % 
	}
	printf("Bye");
	return 0; 
}
