#include <iostream>
using namespace std;

int main()
{

	float startingWage, percentRaisePerYear;
	int yearsWorked;

	cout << "What is your starting wage?" << endl;
	cin >> startingWage;

	cout << "What is your percent wage per year?" << endl;
	cin >> percentRaisePerYear;

	percentRaisePerYear /= 100;

	cout << "How many years have you worked?" << endl;
	cin >> yearsWorked;

	float adjustedWage = startingWage;


	for (int i = 0; i < yearsWorked; i++)
	{
		adjustedWage += adjustedWage * percentRaisePerYear;
	}

	cout << "Your new wage is $" << adjustedWage;

	return 0;
}
