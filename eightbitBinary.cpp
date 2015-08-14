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

string eightbitBinary::appendZeroes(string s ,int input_size){
     
     bitset<8> k(input_size);
    // cout << k <<endl;
    for(int i = s.size(); i < 448; i++){
        s = s + '0';
    }
    for(int i = 0; i < 56; i++)     //this is an extra loop
        s = s + '0';
    s = s + k.to_string<char,string::traits_type,string::allocator_type>(); //A little correction is required for 
  //  cout <<"size of s :"<<s.size() <<"\n"; //future cases
    return s;
}


void eightbitBinary::chunkToWords(string s){
    string m[500] = "";
        int a = 0;
   // cout <<"s : " <<s;
  //  cout << "size of s : "<<s.size()<<"\n";
    for(int i = 0; i < (s.size() / 32);i++){
        
        m[i] = s.string::substr(a,32);
        cout << m[i] <<"\n";
        a += 32;
    }
   // return m;
}