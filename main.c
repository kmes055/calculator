#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
char* diff(char*, int);
 
int main(int argc, char* argv[]) {
	int operand1, operand2, result;
	char operator;
	
	printf("Please enter a expression(ex> 1 + 2) : ");
	scanf("%d %c %d", &operand1, &operator, &operand2);
	
	switch (operator) {
		case '+':
			result = add(operand1, operand2);
			break;
		case '-':
			result = sub(operand1, operand2);
			break;
		case '*':
			result = multi(operand1, operand2);
			break;
		case '/':
			result = div(operand1, operand2);
			break;
		default:
			// TODO show some error message
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int operand1, int operand2) {
	return operand1 + operand2;
}
 
int sub(int operand1, int operand2) {
	return operand1 - operand2;
}
 
int multi(int operand1, int operand2) {
	//TODO implementation
	return operand1 * operand2;
}
 
int div(int operand1, int operand2) {
	if (operand2 == 0){
		printf("0으로 나누지 마시라고요.");
		exit(1);
	}
	
	return operand1/operand2;
}

char* diff(char* func, int x) {
	//TODO implementation
	char* result;
	printf("Diff complete");
	return result;
}
