#include<iostream>
using namespace std;

int stirling(int, int);


int main()
{
	int a, b;

	cout << "please insert two integer numbers seperated by space, first is for n second is for k" << endl;
	cin >> a >> b;

	while (b > a)
	{
		if (b > a)
		{
			cout << "k cannot be bigger than n, impossible partition!" << endl;
			cout << "please insert two integer numbers seperated by space, first is for n second is for k" << endl;
			cin >> a >> b;
		}
		else
		{
			break;
		}
	}
	

	stirling(a, b);
	cout << "Second Kind Stirling Number of (a,b) =" << stirling(a, b) << endl;
	system("pause");
	return 0;
}

int stirling(int n, int k)
{
	if ((n == 0) && (k == 0))
	{
		return 1;
	}
	else if ((n > 0) && (k == 0))
	{
		return 0;
	}
	else if ((n == 0) && (k > 0))
	{
		return 0;
	}
	else
	{
		return (k*stirling((n - 1), k) + stirling((n - 1), (k - 1)));
	}
}