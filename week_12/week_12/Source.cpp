#include <iostream>

using namespace std;

struct date{
	int hours, minutes;
};

int main() {
	date times;
	int h, m, time_passed;
	r:cin >> h >> m >> time_passed;
	m += time_passed;
	if (m > 59) 
	{
		while (m > 59) {
			m -= 60;
			h++;
			if (h > 23) h = 0;
		}
		times.hours = h;
		times.minutes = m;
	}
	else 
	{
		times.hours = h;
		times.minutes = m;
	}
	cout << times.hours << ":" << times.minutes<<endl;goto r;
	return 0;
}