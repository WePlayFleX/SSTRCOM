#include <iostream>
#include <string>

using namespace std;

int main()
{
	string aName = "Aliaksandr";
	string userName;

	cout << "Enter your name: ";
	cin >> userName;
	if (userName == aName)
	{
		cout << "Hello, Aliaksandr!\n";
	}
	else if (userName < aName)
	{
		cout << "Your name comes before Alexander\n";
	}
	else
	{
		cout << "Your name comes after Alexander\n";
	}

	int n = userName.compare(0, 2, aName, 0, 2);
	cout << "First two letters of your name ";
	if (n ==0)
	{
		cout << "match ";
	}
	else if (n < 0)
	{
		cout << "go up ";
	}
	else
	{
		cout << "come after ";
	}

	cout << aName.substr(0, 2) << endl;

	system("pause");
	return 0;
}