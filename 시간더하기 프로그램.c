#include <stdio.h> 

//�������� 
int hour;
int minute;
int minuteAdd;
int date;

void counter(){
	minute += minuteAdd;
	hour += minute/60;
	date = hour/24;
	minute %=60;
	hour %= 24;

}

int main(void){
 printf("��¥�� �Է����ּ��� : ");
 scanf("%d", &date);
 printf("�ø� �Է����ּ���. : ");
 scanf("%d", &hour);
 printf("���� �Է����ּ���. : ");
 scanf("%d", &minute);
 printf("���� ����  �Է����ּ���. : ");
 scanf("%d", &minuteAdd);
 counter();
 printf("������ �ð��� %d�� %d�� %d�� �Դϴ�.\n", date, hour, minute);
 return 0;
}
