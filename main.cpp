#include <iostream>
#include <stdlib.h>

using namespace std;

/* Encrypts a string using Caesar's Cypher.  
 * Takes the ASCII code for each character then uses the number of that to shift it.
 * 
 */
string encryptCaesarCypher(string strMessage, int iShift)
{
    string strResult;
    for(int i = 0; i < strMessage.length(); i++)
    {
	//To handle upper case letters
      	if(int(strMessage.at(i)) >= 65 && int(strMessage.at(i)) <= 90)
	{
	  strResult += ((3 * (int(strMessage.at(i)) - 65)) + 7) % 26 + 65;
	}
	//To handle lower case letters
	else if(int(strMessage.at(i)) >= 97 && int(strMessage.at(i)) <= 122)
	{
	  strResult += ((3 * (int(strMessage.at(i)) - 97)) + 7) % 26 + 97;
	}
	//To handle punctuation, spaces, and other things that are not alphabet
	else
	{
	    strResult += int(strMessage.at(i));
	}


    }
    return strResult;
}

/* Decrypts a string using Caesar's Cypher.  
 * Takes the ASCII code for each character then uses the number of that to shift it.
 */
string decryptCaesarCypher(string strMessage, int iShift)
{
    int iTemp;
    string strResult;
    for(int i = 0; i < strMessage.length(); i++)
    {
	//To handle upper case letters
	if(int(strMessage.at(i)) >= 65 && int(strMessage.at(i)) <= 90)
	{
	  iTemp = (int(strMessage.at(i)) - 65) - iShift;
	  //Shift it if we're in the negative
	  if(iTemp < 0)
	  {
	      iTemp += 26;
	  }
	  strResult += iTemp % 26 + 65;
	}
	//To handle lower case letters
	else if(int(strMessage.at(i)) >= 97 && int(strMessage.at(i)) <= 122)
	{
	  iTemp = (int(strMessage.at(i)) - 97) - iShift;
	  //Shift it if we're in the negative
	  if(iTemp < 0)
	  {
	      iTemp += 26;
	  }
	  strResult += iTemp % 26 + 97;
	}
	//To handle punctuation, spaces, and other things that are not alphabet
	else
	{
	    strResult += int(strMessage.at(i));
	}

    }
    return strResult;
}


int main(int argc, char **argv) 
{
    string strInput;
    int iAmountToShift;
    string strEncrypt;
    
    cout << encryptCaesarCypher("NEEDHELP", 7) << endl;
    
    //Gather the necessary inputs
   /* cout << "Enter your message :  ";
    getline(cin, strInput);
    cout << endl;
    
    cout << "How much to shift by (please enter an integer) : ";
    cin >> iAmountToShift;
    cout << endl;
    
    bool bGoodInput = false;
    while (bGoodInput == false)
    {
	cout << "Do you want to (E)ncrypt this message or (D)ecrypt this message? ";
	cin >> strEncrypt;
	cout << endl;
	if(strEncrypt.at(0) == 'e' || strEncrypt.at(0) == 'E')
	{
	    bGoodInput = true;
	    cout << "Encrypted message : " << encryptCaesarCypher(strInput, iAmountToShift) << endl;
	}
	if(strEncrypt.at(0) == 'd' || strEncrypt.at(0) == 'D')
	{
	    bGoodInput = true;
	    cout << "Decrypted message : " << decryptCaesarCypher(strInput, iAmountToShift) << endl;
	}
    }
    return 0;*/
}
