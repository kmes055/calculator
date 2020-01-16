#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int operand1, operand2, result;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &operand1, &operator, &operand2);
	
	switch (operator)
	{
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
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int operand1, int operand2)
{
	//TODO implementation
	return 0;
}
 
int sub(int operand1, int operand2)
{
	//TODO implementation
	return 0;
}
 
int multi(int operand1, int operand2)
{
	//TODO implementation
	return 0;
}
 
int div(int operand1, int operand2)
{
	//TODO implementation
	return 0;
}
