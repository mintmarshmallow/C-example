#include <stdio.h>

//Ư���� �ݾ��� �޾Ƽ� ���� ���� �Ž��� ȭ���� ������ ���ϴ� �Լ� �Դϴ�. 
int smallest (int number){
	int count[8] = { 0, };
	while(number >= 50000){
		number -= 50000;
		count[0]++;
	}
	while(number >= 10000){
		number -= 10000;
		count[1]++;
	}
	while(number >= 5000){
		number -= 5000;
		count[2]++;
	}
	while(number >= 1000){
		number -= 1000;
		count[3]++;
	}
	while(number >= 500){
		number -= 500;
		count[4]++;
	}
	while(number >= 100){
		number -= 100;
		count[5]++;
	}
	while(number >= 50){
		number -= 50;
		count[6]++;
	}
	while(number >= 10){
		number -= 10;
		count[7]++;
	}
	return count[0] + count[1] + count[2] + count[3] + count[4] + count[5] + count[6] + count[7], ; 
}

int main(void){
	int number; 
	printf("�ݾ��� �Է� ���ּ���.");
	scanf("%d", &number);
	printf("�ּҷ� �� ���ִ� ȭ���� ������ %d�� �Դϴ�.\n", smallest(number)); 
	return 0;
}
