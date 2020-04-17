#include<iostream>
#include<string.h>

namespace problem1 {


void caesar_cipher(char* plain_text, int key)
{

    int cipher_value;
    char cipher_text;

    // looping thought the plain text

    for(int i = 0; i < (int)strlen(plain_text); i++)
    {
        if(isalpha(plain_text[i]))
        {
            //if lowercase

            if(islower(plain_text[i]))
            {
                cipher_value = ((int)plain_text[i]- 97 + key) % 26 + 97;
            }

            //if uppercase

            else
            {
                cipher_value = ((int)plain_text[i]-65 + key) % 26 + 65;
            }

            //Changing the cipherValue into character

            cipher_text = (char)(cipher_value);

            // Display The Cipher Text
            std::cout<<cipher_text;
        }
        else
        {
           std::cout<<plain_text[i];
        }
    }
    std::cout<<std::endl;
}


void vigenere_cipher(char* plain_text, char* key_v)
{

    char cipher;
    int len =strlen(key_v);


    //Loop through the plain text

    for(int i=0, j = 0; i < (int)strlen(plain_text); i++)
    {


        //if alphabet

        if(isalpha(plain_text[i]))
        {
             //if lowercase

              if(islower(plain_text[i]))
              {
                  cipher = (char)((int)plain_text[i]-97 + tolower(key_v[j%len])-97)%26 +97;
              }

              //if uppercase

              else
              {
                  cipher = (char)((int)plain_text[i]-65 + toupper(key_v[j%len])-65)%26 +65;
              }
              std::cout<<cipher;
              j++;
        }

        //if not alphabet

        else
        {
           std::cout<<plain_text[i];
        }

    }
    std::cout<<std::endl;
}


}
