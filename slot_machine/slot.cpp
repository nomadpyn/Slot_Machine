#include "slot.h"
#include<iostream>
using namespace std;
// метод вращения слот машины
void slot::spin() {
	char rslt[3]{ slm[0].getChar(),slm[1].getChar(),slm[2].getChar() };
	cout << rslt[0] << " | " << rslt[1] << " | " << rslt[2] << endl;
	if (rslt[0] == rslt[1] && rslt[1 == rslt[2]])
		cout << "Great! You won 25$!!!" << endl;
	else if (rslt[0] == rslt[1] || rslt[1] == rslt[2] || rslt[2] == rslt[0])
		cout << "You won 5$!" << endl;
	else
		cout << "Sorry! You won nothing (((" << endl;

}