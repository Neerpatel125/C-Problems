#include <iostream>
#include <fstream>
using namespace std;


class Cipher{
    public:
        char DecipherMsg(char *filename, char *key);
};


char Cipher::DecipherMsg(char *filename, char *key){
    // finding the shift
    int sum=0, shift; 
    char temp;
    for(int i=0; key[i]; i++){
        temp = key[i];
        sum+= temp;
    }
    shift = sum % 8;
    
    // Using shift to translate 
    
    fstream file; 
    file.open("encryptedmsg.bin", ios::in | ios::binary);
    while (!file.eof()){
        char a; 
        file.get(a);
        
    	unsigned char b; 
        b = a; 
        
        for(int i = 0; i <= shift; i++){
            b = (b << shift) | (b >> shift);
        }
		cout << b;     
    }   
} 

