#ifndef CALENDAR_INFO_H
#define CALENDAR_INFO_H

namespace Calendar
{
	// 달력 정보
	class CalendarInfo
	{
	public:
		const int year;			// 연도
		const int month;		// 월
		const int startDay;		// 이번달 시작 요일 (0 = 월요일)
		const int days;			// 이번달의 총 일수

		CalendarInfo(int _year, int _month);
		~CalendarInfo();

	private:
		// 해당 연도가 윤년인지 반환
		bool IsLeapYear();		

		// 해당 월의 총 일수 반환
		int GetDays(int _month);	

		// 1년 1월 1일부터 이번년도 전달까지의 총 일수
		int GetTotalDays(int _year, int _month);
	};
}

#endif  !CALENDAR_INFO_H