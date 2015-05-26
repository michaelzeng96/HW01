#include <iostream>
#include<string>
#include<string.h>
#include <ctime>
#include <cmath>
using namespace std;

/*  Results

EX01: (19 / 20)
	d) Actually the answer is a binary digit(0 or 1)
EX02 (16/20):
    b) use x >= y, rather than x > y || x == y
	e) decreases shelfLife: shelfLife -= 4
EX03 (16/20):
    a) the diagonal variable should be a double.
	e) the empty string is "", not null: 	string sVariable = "";
EX04 (17/20):
   e) need to call addonetoparameter, and you need x = x+1 (not just x+1)
EX05 (20/20):

TOTAL: 88/100
*/

int add(int x, int y)
{
	return x + y;
}

int intdoubler(int x)
{
	return x * 2;
}

void addonetoparameter(int &x)
{
	x + 1;
}

void outputarray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

int search(int a[], int size)
{

	cout << "What number are you looking for?" << endl;
	int iSearch = 0;
	cin >> iSearch;

	for (int i = 0; i < size; i++)
	{
		if (iSearch == a[i])
		{
			cout << "Array contains the value " << iSearch;
			return 0;
		}

	}
	cout << "Array does not contain the value " << iSearch;
}


void ex02()
{
	bool hasPassedTest = true;

	int x = rand(), y = rand();
	if (x > y || x == y)
		cout << "X is greater than or equal to y" << endl;

	int numberofShares = 0;
	cout << "Enter a value, user.";
	cin >> numberofShares;
	if (numberofShares < 100)
		cout << "Less than 100" << endl;
	else
		cout << "Not less than 100" << endl;

	int boxWidth, bookWidth = 0;
	cout << "Enter box width"; cin >> boxWidth;
	cout << "Enter book width"; cin >> bookWidth;
	if (boxWidth % bookWidth == 0)
		cout << "Box width is evenly divisble by book width." << endl;

	int shelfLife, temperature = 0;
	cout << "Enter values for life of chocolate and for outside temp, respectively.";
	cin >> shelfLife; cin >> temperature;
	if (temperature>90)
		shelfLife = shelfLife / 4;

}

void ex03()
{
	int iArea = 0;
	cout << "Enter the value for a square";
	cin >> iArea;
	int iSide = pow(iArea, 0.5);
	int iDiagnol = pow(pow(iSide, 2) + pow(iSide, 2), 0.5);
	cout << "The diagnol of the square is " << iDiagnol << endl;

	cout << "User, enter y or n";
	char cVariable;
	cin >> cVariable;
	if (cVariable == 'y')
		cout << "yes" << endl;
	if (cVariable == 'n')
		cout << "no" << endl;

	char cTab = '\t';

	string sMailingAddress;
	cout << "Enter your mailing address";
	getline(cin, sMailingAddress);

	string sVariable = NULL;
}

void ex04()
{
	cout << "Enter a number between 1 and 10";
	int iNumber = 0;
	cin >> iNumber;

	do
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Must be a number." << endl;
			cin >> iNumber;
		}
		if (iNumber > 10 || iNumber < 1)
		{
			cout << "Number must be between 1 and 10" << endl;
			cin >> iNumber;
		}
	} while (iNumber > 10 || iNumber < 1);

	int sum = 0;
	for (int i = 1; i < iNumber + 1; i++)
	{

		sum += pow(i, 3);
	}
	cout << sum;


	int count = 0;
	do
	{

		cout << "*";
		count++;
	} while (count < iNumber);


	for (int i = 2; i < 41; i++)
	{
		if (i % 2 == 0)
			cout << i << " ";
	}

	intdoubler(iNumber);
	cout << add(rand(), rand());
}

void ex05()
{
	cout << "Enter 5 integers for your array." << endl;
	int fivenumbers[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> fivenumbers[i];
	}

	int iSum = 0;
	int iProduct = 1;
	for (int i = 0; i < 5; i++)
	{
		iSum = iSum + fivenumbers[i];
	}
	cout << iSum << endl;

	for (int i = 0; i < 5; i++)
	{
		iProduct = iProduct*fivenumbers[i];
	}
	cout << iProduct << endl;

	outputarray(fivenumbers, 5);

	search(fivenumbers, 5);

}



int main()
{
	srand(time(NULL));

	ex02();
	ex03();
	ex04();
	ex05();

	return 0;
}