#include <iostream>
#include <string>
using namespace std;

int main()
{
	float batter;

	cout << "What is your battery charge? %";
	cin >> battery;

	if (battery >= 75)
	{
		cout << "[****]" << endl;
	}
	if (battery >= 50)
	{
		cout << "[***]" << endl;
	}
	if (battery >= 25)
	{
		cout << "[**]" << endl;
	}

	if (battery >= 1)
	{
		cout << "[*]" << endl;

	}
	if (battery = 0)
	{
		cout << "[]" << endl;
	}
	return 0;
}