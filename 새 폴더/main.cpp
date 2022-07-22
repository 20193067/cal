#include "Calendar_Print.h"

using namespace Calendar;

void OnPlay()
{
	int input = -1;
	while (true)
	{
		cout << "����� ������ �Է��ϼ��� (0�� �Է��ϸ� ����) : ";
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
	cout << "���α׷��� �����մϴ�." << endl;
}

int main()
{
	OnPlay();
	return 0;
}