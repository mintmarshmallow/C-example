#include <stdio.h>
#include <string.h>

int main(void){
	char input[10] = "I Love ou";
	char result[5] = "love";
	strcpy(result, input);
	printf("���ڿ� ���� : %s\n", result);
	return 0;
}
