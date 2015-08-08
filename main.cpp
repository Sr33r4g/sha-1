#include <stdio.h>
#include<iostream>
#include "eightbitBinary.h"
using namespace std;

int main(int argc, char **argv)
{
    eightbitBinary e;
    /*string input;
	cout <<"Enter the string: ";
    cin >> input;*/
	string s = "A man needs a name ,so does a girl";
    string zz = e.toInt(s,s.size());
    cout << zz;
    
    cin.get();
	return 0;
}
