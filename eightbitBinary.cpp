#include "eightbitBinary.h"
#include<bitset>
#include<string>
#include<iostream>
#include<fstream>       //delete this after use

using namespace std;

template <std::size_t N>
inline
void
rotate11(std::bitset<N>& b, unsigned m)
{
b = b << m | b >> (N-m);
}

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


std::string* eightbitBinary::chunkToWords(string s){
    
        int a = 0;
   // cout <<"s : " <<s;
  //  cout << "size of s : "<<s.size()<<"\n";
    for(int i = 0; i < (s.size() / 32);i++){
        
        m[i] = s.string::substr(a,32);
    //    cout << m[i] <<"\n";
        a += 32;
    }
   // string *sp = m;
    return m;         //IT SHOULD RETURN THE STRING ARRAY!!!! ELSE THE PROGRAM FAILS!!!...
}

void eightbitBinary::extend(std::string *s){
        ofstream myfile;
        myfile.open("C:\\Users\\SreeraG\\Documents\\FTPs\\C++\\sha-1\\example.txt");
    string h[500];
        for(int i = 0; i <= 15; i++){
     //   cout<< "i: "<<i <<" ";
        myfile<< "i: "<<i <<" ";
        myfile<<"\n\n";
    //    cout<< *(s + i)<<"\n";
        myfile << *(s + i)<<"\n";
        
        }
        
    for(int i = 16;i <= 79; i++){
        
        cout<< "\ni: "<<i <<"\n";
        myfile<< "\ni: "<<i <<"\n";
    //    cout<<"i - 3: "<<(i-3) <<" value : "<<*(s + (i-3))<<"\n";
    //    cout<<"i - 8: "<<(i-8) <<" value : "<<*(s + (i-8))<<"\n";
    //    cout<<"i - 14: "<<(i-14) <<" value : "<<*(s + (i-14))<<"\n";
    //    cout<<"i - 16: "<<(i-16) <<" value : " <<*(s + (i-16))<<"\n";
        bitset<32> az(*(s + (i-3))),b(*(s + (i-8))),c(*(s + (i-14))),d(*(s + (i-16)));
     //   (((aa ^ b) ^ c) ^ d).to_string<char,string::traits_type,string::allocator_type>();
        bitset<32> zo((((az ^ b) ^ c) ^ d));
        rotate11(zo,1);
        *(s + i) = (zo).to_string<char,string::traits_type,string::allocator_type>();
        cout<<*(s + i) <<"\n";
        cout<<"\n";
    }
   }
        
 