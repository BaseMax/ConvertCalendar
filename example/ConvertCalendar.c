/**
*
* @Name : ConvertCalendar.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-31
* @Released under : https://github.com/BaseMax/ConvertCalendar/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/ConvertCalendar
*
**/
#include <stdio.h>
#include "../source/ConvertCalendar.h"

int main() {
	date input={2019, 03, 31};
	date result=gregorian2jalali(input);
	printf("==> Result : %d/%d/%d\n", result.year, result.month, result.day);
	return 0;
}
