#include <iostream>
using namespace std;

int main()
{
    int rows ;
    cin >> rows;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i == j && i != rows /2 && j != rows /2)
			{
				cout << "\\";
			}
			else if (i == rows / 2 && j == rows / 2 )
			{
				cout << "X";
			}
			else if(i == ((rows - 1) - j))
			{
				cout << "/";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}