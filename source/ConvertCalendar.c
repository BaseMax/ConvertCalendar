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
#include "ConvertCalendar.h"

date gregorian2jalali(date input) {
	date result;
	int array[]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	if(input.year<=1600) {
		input.year-=621;
		result.year=0;
	}
	else {
		input.year-=1600;
		result.year=979;
	}
	int temp=(input.year>2)?(input.year+1):input.year;
	int days=((int)((temp+3)/4)) + (365*input.year) - ((int)((temp+99)/100)) - 80 + array[input.month-1] + ((int)((temp+399)/400)) + input.day;
	result.year+=33*((int)(days/12053)); 
	days%=12053;
	result.year+=4*((int)(days/1461));
	days%=1461;
	if(days > 365){
		result.year+=(int)((days-1)/365);
		days=(days-1)%365;
	}
	result.month=(days < 186)?1+(int)(days/31):7+(int)((days-186)/30);
	result.day=1+((days < 186)?(days%31):((days-186)%30));
	return result;
}

date jalali2gregorian(date input) {
	date result; //g*
	if(input.year<=979) {
		result.year=621;
	}
	else {
		input.year-=979;
		result.year=1600;
	}
	int temp=(((int)(input.year/33))*8) + ((int)(((input.year%33)+3)/4)) + (365*input.year) + 78 + input.day + ((input.month<7)?(input.month-1) * 31 : ((input.month - 7) * 30) + 186);
	result.year+=400*((int)(temp/146097));
	temp%=146097;
	if(temp > 36524) {
		result.year+=100*((int)(--temp/36524));
		temp%=36524;
		if(temp >= 365)
			temp++;
	}
	result.year+=4*((int)(temp/1461));
	temp%=1461;
	if(temp > 365) {
		result.year+=(int)((temp-1)/365);
		temp=(temp-1)%365;
	}
	result.day=temp + 1;
	int array[]={0, 31, ((result.year%4==0 && result.year%100!=0) || (result.year%400==0))?29:28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int length=sizeof(array)/sizeof(array[0]);
	for(int index=0;index<length;index++) {
		result.month=index;
		if(result.day<=array[index])
			break;
		result.day-=array[index];
	}
	return result;
}
