#ifndef EIGHTBITBINARY_H
#define EIGHTBITBINARY_H
#include<iostream>
#include<string>
        //This is used to convert input to 8bit binary and also for appending
        //the remaining zeroes
        
        
   /* std::string h0 = "01100111010001010010001100000001";
    std::string h1 = "11101111110011011010101110001001";
    std::string h2 = "10011000101110101101110011111110";
    std::string h3 = "00010000001100100101010001110110";
    std::string h4 = "11000011110100101110000111110000";*/
class eightbitBinary
{
public:
    std::string m[500];
    std::string h0 = "01100111010001010010001100000001";
    std::string h1 = "11101111110011011010101110001001";
    std::string h2 = "10011000101110101101110011111110";
    std::string h3 = "00010000001100100101010001110110";
    std::string h4 = "11000011110100101110000111110000";
    
    std::string A = h0;
    std::string B = h1;
    std::string C = h2;
    std::string D = h3;
    std::string E = h4;
    
    
    
    //functions
    std::string toInt(std::string c, int z);    //this works
    std::string toBinary(int k);  //this works too
    std::string appendZeroes(std::string s,int inputsize);  //this works too
    std::string * chunkToWords(std::string s);   //this works too  THIS IS STEP 8  AND THIS SHOULD RETURN A STRING@!!!!
    std::string* extend(std::string *s);    //this works too.... step 9 complete
    
    void f1(std::string *s);
    void f2(std::string *s);
    void f3(std::string *s);
    void f4(std::string *s);
        
    
    
    
    //void checker(std::string l);
    
};




#endif // EIGHTBITBINARY_H
