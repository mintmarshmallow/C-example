#include <stdio.h>
#include <string.h>

int main(void){
	char input[10] = "I Love ou";
	char result[5] = "love";
	strcpy(result, input);
	printf("문자열 복사 : %s\n", result);
	return 0;
}
