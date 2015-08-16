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
	string input = "A Test";
    string zz = e.toInt(input,input.size());
   // cout << zz <<"\n\n\n";
    string zzz = e.appendZeroes(zz,input.size()*8);
   // cout << zzz.size();
   // cout <<"\n\n\nChuncking starts here";
   
    string *k;
    k = e.chunkToWords(zzz);
    
    e.extend(k);
    cin.get();
	return 0;
}
