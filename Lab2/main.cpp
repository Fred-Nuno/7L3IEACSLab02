#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


#include "problem1.h"
#include "problem2.h"


int main()
{



        //__________________Problem__1_____________________


        //__________Problem__1___part__1________Caesar__Cipher_______



//        std::cout<<"______THE CAESAR CIPHER!!!_____ "<<std::endl;

//        int key;
//        char plain_text[100];

//        std::cout<<"Enter the text you want to encrypt : "<<std::endl;

//        //Get the users text input and store it in plainText variable
//        fgets(plain_text, sizeof(plain_text), stdin);

//        std::cout<<"Enter the key (a Number) you want to encrypt with : ";

//        std::cin>>key;

//        std::cout<<"The cipher text is : "<<std::endl;

//        // Calling the Caesar Cipher Function
//        problem1::caesar_cipher(plain_text, key);


//        //__________Problem__1___part__2______Vigenere__Cipher____________


//        std::cout<<"______THE VIGINERE CIPHER!!!_____ "<<std::endl;

//        char plain_text_v[] = "ATTACKATDAWN";
//        char key_v[] = "LEMON";

//        std::cout<<"The cipher text is : "<<std::endl;

//        // Calling the Vigenere Cipher Function

//        problem1::vigenere_cipher(plain_text_v, key_v);


        //__________________Problem__2_____________________


//        std::cout<<"______THE CAESAR DECIPHER!!!_____ "<<std::endl;


        char cipher_text[] = "XYZABCDEFGHIJKLMNOPQRSTUVW";
        int key2 = 23;

        std::cout<<"The plain text is : "<<std::endl;

        // Calling the Caesar Cipher Function

        problem2::caesar_decipher(cipher_text, key2);



//        std::cout<<"______THE VIGENERE DECIPHER!!!_____ "<<std::endl;

//        char cipher2_text_v[] = "LXFOPVEFRNHR";
//        char key2_v[] = "LEMONLEMONLE";

//        std::cout<<"The Plain text is : "<<std::endl;

//        // Calling the Vigenere Cipher Function

//        problem2::vigenere_decipher(cipher2_text_v, key2_v);

    return 0;
}
