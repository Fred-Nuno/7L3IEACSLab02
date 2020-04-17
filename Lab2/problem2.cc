#include<iostream>
#include<string.h>

namespace problem2 {


void caesar_decipher(char* cipher_text, int key)
{

    int cipher_value;
    char plain_text;

    // looping thought the cipher text

    for(int i = 0; i < (int)strlen(cipher_text); i++)
    {
        //if alphabet

        if(isalpha(cipher_text[i]))
        {

            //If uppercase

            if(isupper(cipher_text[i]))
            {
                cipher_value = ((((int)cipher_text[i] - 65) - key) % 26) + 65;
            }

            //if lowercase

            if(islower(cipher_text[i]))
            {
                cipher_value = ((((int)cipher_text[i] - 97) - key) % 26) + 97;
            }

            //Changing the cipherValue into character

            plain_text = (char)(cipher_value);

            // Display The Cipher Text

            std::cout<<plain_text;
        }

        else
        {
           std::cout<<cipher_text[i];
        }
    }
    std::cout<<std::endl;
}


void vigenere_decipher(char* cipher_text, char* key_v)
{

    char plain_text;
    int len =strlen(key_v);

    //Loop through the plain text

    for(int i=0, j = 0; i < (int)strlen(cipher_text); i++)
    {


        // if alphabet

        if(isalpha(cipher_text[i]))
        {
             //if the character is lowercase

              if(islower(cipher_text[i]))
              {
                  plain_text = (char)((int)cipher_text[i]-97 - tolower(key_v[j%len])-97)%26 +97;
              }

              //if uppercase

              else
              {
                  plain_text = (char)((int)cipher_text[i]-65 - toupper(key_v[j%len])-65)%26 +65;
              }
              std::cout<<plain_text;
              j++;
        }

        //if not alphabet

        else
        {
           std::cout<<cipher_text[i];
        }

    }
    std::cout<<std::endl;
}

}
