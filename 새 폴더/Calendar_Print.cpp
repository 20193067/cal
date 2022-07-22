#include "Calendar_Print.h"

using namespace Calendar;

PrintCalendar::PrintCalendar(CalendarInfo* _info) : info(_info) { }

void PrintCalendar::Print()
{
	cout << setw(15) << info->year << "�� " << info->month << "��" << endl;
	cout << setw(25) << "==================" << endl;
	cout << "-----------------------------------------" << endl;

	int spacing = 5;
	//cout << setw(spacing) << "��" << setw(spacing) << "��" << setw(spacing) << "ȭ" << setw(spacing) << "��" 
	//	<< setw(spacing) << "��" << setw(spacing) << "��" << setw(spacing) << "��" << endl;

	cout << setw(spacing) << "��" << setw(spacing) << "ȭ" << setw(spacing) << "��" << setw(spacing) << "��" 
		<< setw(spacing) << "��" << setw(spacing) << "��" <<  setw(spacing) << "��" << endl;

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