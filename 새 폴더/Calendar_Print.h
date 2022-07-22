#ifndef CALENDAR_PRINT_H
#define CALENDAR_PRINT_H

#include "Calendar_Info.h"
#include <iostream>
#include <iomanip>

using namespace std;

namespace Calendar
{
	// �޷� ��¿� Ŭ����
	class PrintCalendar
	{
		CalendarInfo* info;

	public:
		PrintCalendar(CalendarInfo* _info);
		void Print();
		~PrintCalendar();
	};
}

#endif  !CALENDAR_PRINT_H