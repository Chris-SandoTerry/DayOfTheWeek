#include <iostream>
#include <string>

using namespace std;

bool checkYear(int year)
{
	if (year % 400 == 0)
	{
		return true;
	}

	else if (year % 100 == 0)
	{
		return false;
	}

	else if (year % 4 == 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}

int main()
{

	string month;
	int day;
	int year;
	int weekDay;
	int z = 0;
	int centralValue = 0;
	int y = 0;
	int r = 0;
	int m = 0;
	// int leapYear;

	cout << "What is the month." << endl;
	cin >> month;

	if (month == "January" || month == "October")
	{
		m = 0;
	}
	else if (month == "May")
	{
		m = 1;
	}
	else if (month == "August")
	{
		m = 2;
	}
	else if (month == "February" || month == "March" || month == "November")
	{
		m = 3;
	}
	else if (month == "June")
	{
		m = 4;
	}
	else if (month == "September")
	{
		m = 5;
	}
	else if (month == "April" || month == "July")
	{
		m = 6;
	}
	else if (month == "December")
	{
		m = 12;
	}
	else
	{
		cout << month << " Does not exist" << endl;
		return -1;
	}

	cout << "What is the day of the month." << endl;
	cin >> day;

	cout << "What is the year." << endl;
	cin >> year;

	z = year / 100;

	centralValue = 2 * (3 - (z % 4));

	y = year % 100;
	r = y % 12;

	// Change year because yaer 2 was getting changed
	int year2 = y / 12 + r + (r / 4);

	weekDay = (day + centralValue + year2 + m) % 7;

	bool leapYear = checkYear(year);

	if (leapYear)
	{
		weekDay -= 1;
		if (weekDay == -1)
		{
			weekDay = 6;
		}
	}

	switch (weekDay)
	{
	case 0:
		cout << "The day of the week is " << "Sunday" << "." << endl;
		break;
	case 1:
		cout << "The day of the week is " << "Monday" << "." << endl;
		break;
	case 2:
		cout << "The day of the week is " << "Tuesday" << "." << endl;
		break;
	case 3:
		cout << "The day of the week is " << "Wednesday" << "." << endl;
		break;
	case 4:
		cout << "The day of the week is " << "Thursday" << "." << endl;
		break;
	case 5:
		cout << "The day of the week is " << "Friday" << "." << endl;
		break;
	case 6:
		cout << "The day of the week is " << "Saturday" << "." << endl;
		break;
	default:
		cout << "Error in the calculation" << endl;
	}

	return 0;
}