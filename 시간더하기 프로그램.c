#include <stdio.h> 

//전역변수 
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
 printf("날짜를 입력해주세요 : ");
 scanf("%d", &date);
 printf("시를 입력해주세요. : ");
 scanf("%d", &hour);
 printf("분을 입력해주세요. : ");
 scanf("%d", &minute);
 printf("더할 분을  입력해주세요. : ");
 scanf("%d", &minuteAdd);
 counter();
 printf("더해진 시간은 %d일 %d시 %d분 입니다.\n", date, hour, minute);
 return 0;
}
