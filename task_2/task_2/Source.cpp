#include <iostream>

using namespace std;

struct date {
	int hours, minutes;
};

int main() {
	date times;
	r:int h_start, m_start, h_finish,m_finish,time_start,time_finish,time_end,h_end=0,m_end=0;
	cin >> h_start >> m_start >> h_finish >> m_finish;

	time_start = h_start * 60 + m_start;
	time_finish= h_finish * 60 + m_finish;
	time_end = time_finish - time_start;

	if (time_end<0) time_end = 1440 - abs(time_end);

	while (time_end > 59) {
		h_end++;
		time_end -= 60;
	}

	m_end = time_end;
	times.hours = h_end;
	times.minutes = m_end;

	cout << times.hours << ":" << times.minutes << endl;goto r;
	return 0;
}