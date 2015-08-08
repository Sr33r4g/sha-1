#include "eightbitBinary.h"
#include<bitset>
#include<string>
#include<iostream>

using namespace std;

string eightbitBinary::toInt(string k,int size_of_input){
    string o;
    for(int i = 0; i < size_of_input ; i++)
    {
        o = o + toBinary((int) k[i]);
    }
        
    return o + '1';
}
string eightbitBinary::toBinary(int k){
    
    string s;
    bitset<8> z(k);
    s = z.to_string<char,string::traits_type,string::allocator_type>();
    
    return s ;
}