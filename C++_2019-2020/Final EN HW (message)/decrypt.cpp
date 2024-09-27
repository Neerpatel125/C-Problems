#include "cipher.h"
#include<iostream>

int main()
{
  Cipher encrypt;
  cout<< encrypt.DecipherMsg("encryptedmsg.bin","ibrahim") << endl;
  return 1; 
} 