// Code For Fibo Sequence Calculator

#include <iostream>
using namespace std;

int main(void) {

	int x = 0;
	int termOne = 0;
	int termTwo = 1;
	int nextTermInSequence = 0;

	cout << "Please Enter The Numbers Of Terms You Want In The Sequence ";
	cin >> x;

	for (int i = 1; i <= x; ++i) {

		if (i == 1)
		{
			cout << " " << termOne;
			continue;


		}
		
		if (i == 2)
		{

			cout << termTwo << " ";
			continue;

		}

		nextTermInSequence = termOne + termTwo;
		termOne = termTwo;
		termTwo = nextTermInSequence;

		cout << nextTermInSequence << " ";
			





	}
	








}