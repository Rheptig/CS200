#include <iostream>
#include <string>
using namespace std;

int main()
{
	float studentPoints;

	cout << "What was your score? ";
	cin >> studentPoints;

	float totalPoints;

	cout << "What is the total points? ";
	cin >> totalPoints;

	float percent = (studentPoints / totalPoints) * 100;

	cout << "Score: " << percent << "%";

	if (percent >= 70)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}



	return 0;
}