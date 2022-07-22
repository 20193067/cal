#include "Calendar_Info.h";

using namespace Calendar;

int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

CalendarInfo::CalendarInfo(int _year, int _month) : 
	year(_year), month(_month), days(GetDays(_month)), startDay(GetTotalDays(_year, _month) % 7) { }

// 윤년 체크
bool CalendarInfo::IsLeapYear()
{
	return ((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0);
}

// 이번달의 총 일수
int CalendarInfo::GetDays(int _month)
{
	if (IsLeapYear())
		month_days[1] = 29;
	return month_days[_month - 1];
}

int CalendarInfo::GetTotalDays(int _year, int _month)
{
	// 전년도까지의 총 일수
	int yearTotal = ((_year - 1) * 365) + (((_year - 1) / 4) - ((_year - 1) / 100) + ((_year - 1) / 400));

	// 이번년도 전달까지의 총 일수
	int monthTotal = 0;
	for (int i = 1; i < _month; i++)
		monthTotal += month_days[i - 1];

	return yearTotal + monthTotal;
}

CalendarInfo::~CalendarInfo() { }