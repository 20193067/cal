#ifndef CALENDAR_INFO_H
#define CALENDAR_INFO_H

namespace Calendar
{
	// �޷� ����
	class CalendarInfo
	{
	public:
		const int year;			// ����
		const int month;		// ��
		const int startDay;		// �̹��� ���� ���� (0 = ������)
		const int days;			// �̹����� �� �ϼ�

		CalendarInfo(int _year, int _month);
		~CalendarInfo();

	private:
		// �ش� ������ �������� ��ȯ
		bool IsLeapYear();		

		// �ش� ���� �� �ϼ� ��ȯ
		int GetDays(int _month);	

		// 1�� 1�� 1�Ϻ��� �̹��⵵ ���ޱ����� �� �ϼ�
		int GetTotalDays(int _year, int _month);
	};
}

#endif  !CALENDAR_INFO_H