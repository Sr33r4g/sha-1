#include "eightbitBinary.h"
#include<bitset>
#include<string>
#include<iostream>
#include<fstream>       //delete this after use

using namespace std;


template <std::size_t N>
inline void rotate11(std::bitset<N>& b, unsigned m)
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

std::string* eightbitBinary::extend(std::string *s){
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
        bitset<32> az(*(s + (i-3))),bz(*(s + (i-8))),cz(*(s + (i-14))),dz(*(s + (i-16)));
                                                                                                                    //   (((aa ^ b) ^ c) ^ d).to_string<char,string::traits_type,string::allocator_type>();
        bitset<32> zo((((az ^ bz) ^ cz) ^ dz));
        rotate11(zo,1);
        *(s + i) = (zo).to_string<char,string::traits_type,string::allocator_type>();
        cout<<*(s + i) <<"\n";
        cout<<"\n";
    }
        return s;
   }
   
void eightbitBinary::f1(std::string *s){            // 0 - 19
    string f1;
    string k1 = "01011010100000100111100110011001";
    bitset<32> b1(eightbitBinary::B), c1(eightbitBinary::C), d1(eightbitBinary::D);    
    
    cout<<"\nf1";
    cout <<"\nb "<< b1;
    cout <<"\nc "<< c1;
    cout <<"\nd "<< d1;
    
    bitset<32> e1((b1 & c1) | ( ~b1 & d1));
    f1 = e1.to_string<char,string::traits_type,string::allocator_type>(); //WORKING
    cout << "\nf1 : " << f1;
    
    
}
     
void eightbitBinary::f2(std::string *s){            // 20 - 39
    
    string f2;
    string k2 = "01101110110110011110101110100001";
    bitset<32> b2(3699940981), c2(3038005488), d2(1319942839);    
    
   // cout<<"\n\nf2";
  //  cout <<"\nb "<< b2;
   // cout <<"\nc "<< c2;
  //  cout <<"\nd "<< d2;
    
    bitset<32> e2((b2 ^ c2) ^ d2);
  //  cout << "\nb2 ^ c2 : "<<(b2 ^ c2);
    f2 = e2.to_string<char,string::traits_type,string::allocator_type>(); //WORKING
    cout << "\nf2 : " << f2;
    
    
    
}

void eightbitBinary::f3(std::string *s){            //  40 - 59
    
    string f3;
    string k3 = "10001111000110111011110011011100";
    bitset<32> b3(1153465975), c3(446380731), d3(1399155428);    
    
    bitset<32> e3(((b3 & c3) | (b3 & d3)) | (c3 & d3));
    f3 = e3.to_string<char,string::traits_type,string::allocator_type>(); //WORKING
    cout << "\nf3 : " << f3;
    
    
}

void eightbitBinary::f4(std::string *s){            //  60-79
    
    string f4;
    string k4 = "11001010011000101100000111010110";
    bitset<32> b4(3699940981), c4(3038005488), d4(1319942839);    
    
    bitset<32> e4((b4 ^ c4) ^ d4);
    f4 = e4.to_string<char,string::traits_type,string::allocator_type>(); //WORKING
    cout << "\nf4 : " << f4;
    
    
}   
 