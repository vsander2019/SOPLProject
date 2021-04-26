/*
program showcases procedural programming in C that checks to see
if a word is a palindrome or not
Vanessa Sanders
4/14/2021
*/

#include<stdio.h> // include stdio.h library
#include<string.h> // include stdio.h library

//C does not support the scope resolution operator

//Concept -- does not support classes

int main()
{       

    int len, i= 0, isPalindrome = 1; 

    //Concept -- string is an array of characters

    char inputWord[20]; //in C a string is actually an array of characters so the implementation/type is different


    printf("Enter a word: ");
    scanf("%s", inputWord); //scanf works differently than cin and cout used in C++ the type must be given in scanf

    int endOfString = strlen(inputWord) - 1;  // gets the last letter in the char array

    while(i <= endOfString)
    {
        if (inputWord[i] != inputWord[endOfString])
        {
            isPalindrome = 0;
            break;
        }

        i++;  
        endOfString--;
    }

    //the C program here is just iterating through the character array from the front and back
    //it checks to make sure the characters are the same from both directions meaning it could
    //be a palindrome if reversed

    if(isPalindrome)
    {
        printf("%s is palindrome", inputWord);
    }
    else
    {
        printf("%s is not palindrome", inputWord);
    }

    //Concept --
    //in this program no function is defined and the entire program runs procedurarally
    //with no information hiding in order to determine if the string is a palindrome
}
