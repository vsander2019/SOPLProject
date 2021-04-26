//program in C++ that checks to see if the word, taken as input
//is a palindrome or not
//OBJECT ORIENTED paradigm
//Vanessa Sanders
//4/14/2021

//include statements to reference libraries that contain code for
//working with strings and input/output streams

#include <string>
#include <iostream>

using std::cin; using std::cout; using std::endl; using std::string; using std::swap;

//C++ allows scope management as seen above

//Concept -- ability to create classes and use their interfaces
//to utilize object oriented programming a class is defined here with functions
//that can be utilized after an objected is declared in the main program
//this allows implementation to take place outside of the main program

class PalindromeCheck{
public:
PalindromeCheck(string &input): inputWord_(input){} //Conecpt : use of a references which are not supported in C
void reverseWord(){
    reverseString_ = inputWord_;
    for(int i = 0; i < reverseString_.length() ; ++i){
        swap(reverseString_[i], reverseString_[reverseString_.length() - i - 1]);
    }
}
void palindrome(){
    if (reverseString_ == inputWord_){
        cout << this->inputWord_ << " is a palindrome" << endl;
    }
    else{cout << this->inputWord_ << " is not a palindrome" << endl;}
}
private:
//this allows for information to be hidden/inaccessable
string inputWord_;
string reverseString_;
};

int main(){

//Concept -- string is a class

string inputWord = "";

cout << "Input a word: ";

cin >> inputWord;

//declaring an object of type PalindromeCheck in order to use its functionaility
//Does not need to be declared at the beginning
PalindromeCheck Checker(inputWord);

//Using the functions of the object Checker
//Concept - this supports information hiding because the user does not know the implementation
Checker.reverseWord();
Checker.palindrome();

}
