#include <iostream>
#include<string>

using namespace std;

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
	int leapYear;

    cout << "What is the month." << endl;
	cin >> month;

	cout << "What is the day of the month." << endl;
	cin >> day;

	cout << "What is the year." << endl;
	cin >> year;



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

	z = year / 100;

	centralValue = 2 * (3 - (z % 4));

	y = year % 100;
	r = y % 12;

	year = y / 12 + r + (r / 4);
    
	weekDay = (day + centralValue + year + m) % 7;

	leapYear = (year % 4 == 0 && year % 400 != 0);
	

	if (leapYear)
	{
		weekDay -= 1;
		if (weekDay == -1)
		{
			weekDay = 6;
		}
	}


	switch(weekDay) {
		case 0:
		  cout << "The day of the week is " << "Sunday"<< "." << endl;
		case 1:
		  cout << "The day of the week is " << "Monday"<< "." << endl;
		case 2:
		  cout << "The day of the week is " << "Tuesday"<< "." << endl;
		case 3:
		  cout << "The day of the week is " << "Wednesday"<< "." << endl;
		case 4:
		  cout << "The day of the week is " << "Thursday"<< "." << endl;
		case 5:
		  cout << "The day of the week is " << "Friday"<< "." << endl;
		case 6:
		    cout << "The day of the week is " << "Saturday"<< "." << endl;
		default:
			cout << "Error in the calculation" << endl;
	}


  return 0;
}