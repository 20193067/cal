#include "Calendar_Print.h"

using namespace Calendar;

PrintCalendar::PrintCalendar(CalendarInfo* _info) : info(_info) { }

void PrintCalendar::Print()
{
	cout << setw(15) << info->year << "년 " << info->month << "월" << endl;
	cout << setw(25) << "==================" << endl;
	cout << "-----------------------------------------" << endl;

	int spacing = 5;
	//cout << setw(spacing) << "일" << setw(spacing) << "월" << setw(spacing) << "화" << setw(spacing) << "수" 
	//	<< setw(spacing) << "목" << setw(spacing) << "금" << setw(spacing) << "토" << endl;

	cout << setw(spacing) << "월" << setw(spacing) << "화" << setw(spacing) << "수" << setw(spacing) << "목" 
		<< setw(spacing) << "금" << setw(spacing) << "토" <<  setw(spacing) << "일" << endl;

	cout << "-----------------------------------------" << endl;

	for (int i = 0; i < info->days; i++)
	{
		if ((info->startDay + i) % 7 == 0 && i > 0)
			cout << endl;

		if (info->startDay > 0 && i == 0)
			spacing = spacing * (info->startDay + 1);
		else
			spacing = 5;

		cout << setw(spacing) << (i + 1);
	}
	cout << endl << endl;
}

PrintCalendar::~PrintCalendar() { }