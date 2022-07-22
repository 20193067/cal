#include "Calendar_Print.h"

using namespace Calendar;

void OnPlay()
{
	int input = -1;
	while (true)
	{
		cout << "출력할 연도를 입력하세요 (0을 입력하면 종료) : ";
		cin >> input;
		cout << endl;

		if (input == 0)
			break;

		for (int i = 1; i <= 12; i++)
		{
			CalendarInfo info = CalendarInfo(input, i);
			PrintCalendar pc = PrintCalendar(&info);
			pc.Print();
		}
		continue;
	}
	cout << "프로그램을 종료합니다." << endl;
}

int main()
{
	OnPlay();
	return 0;
}