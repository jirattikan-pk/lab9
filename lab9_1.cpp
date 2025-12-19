#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double start,inter,pay,Ninter;
	cout << "Enter initial loan: ";
	cin >> start;
	cout << "Enter interest rate per year (%): ";
	cin >> inter;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	

	for(int i=1;start!=0;i++)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i;
		cout << setw(13) << left << start;
		Ninter=start*(inter/100.0);
		cout << setw(13) << left << Ninter;
		start=start+Ninter;
		cout << setw(13) << left << start;
		if(start<pay) {
			cout << setw(13) << left << start;
			start=start-start;
			cout << setw(13) << left << start;
			break;
		}
		else {
			cout << setw(13) << left << pay;
		}
		start=start-pay;
		cout << setw(13) << left << start;
		cout << "\n";	

	}
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	
	return 0;
}
