/**
*
* @Name : ConvertCalendar.h
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-31
* @Released under : https://github.com/BaseMax/ConvertCalendar/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/ConvertCalendar
*
**/
typedef struct {
	// We can use the uint8_t type.
	int year;
	int month;
	int day;
} date;

date gregorian2jalali(date input);
