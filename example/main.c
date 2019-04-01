/**
*
* @Name : Example.c
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
	// date input={2019, 03, 31};
	// date result=gregorian2jalali(input);
	// printf("==> Result : %d/%d/%d\n", result.year, result.month, result.day);

	date result;
	date input;

	input.year=2019;
	input.month=03;
	input.day=31;
	result=gregorian2jalali(input);
	printf("==> Result : %d/%d/%d\n", result.year, result.month, result.day);

	input.year=1398;
	input.month=01;
	input.day=13;
	result=jalali2gregorian(input);
	printf("==> Result : %d/%d/%d\n", result.year, result.month, result.day);

	return 0;
}
