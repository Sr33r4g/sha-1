#ifndef EIGHTBITBINARY_H
#define EIGHTBITBINARY_H
#include<iostream>
#include<string>
        //This is used to convert input to 8bit binary and also for appending
        //the remaining zeroes
class eightbitBinary
{
public:
    std::string h0 = "01100111010001010010001100000001";
    std::string h1 = "11101111110011011010101110001001";
    std::string h2 = "10011000101110101101110011111110";
    std::string h3 = "00010000001100100101010001110110";
    std::string h4 = "11000011110100101110000111110000";
    
    //fucntions
    std::string toInt(std::string c, int z);    //this works
    std::string toBinary(int k);  //this works too
    std::string appendZeroes(std::string s,int inputsize);  //this works too
    void chunkToWords(std::string s);   //this works too  THIS IS STEP 8 
    
    
};




#endif // EIGHTBITBINARY_H
