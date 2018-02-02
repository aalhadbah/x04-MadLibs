//Authors: Abdulaziz alhadbah
#include <iostream>
#include <string>

using namespace std;

int main()
{ 
    string name;
    int number;
    char letter;
    char character;

cout<< "what is the person called?\n";
cin>> name;

cout<< "what is his favorite number?\n";
cin>> number;

cout<< "what is the first lettter of his first name?\n";
cin>> letter;

cout<< "can you give me a character mentioned in the story?\n";
cin>> character;


std::cout<< "One day, I entered english class at my college, And i met a person called "<<name<<" ,his favorite number is "<<number<<" and his first name starts with the letter "<<letter<<" and he asked me what is your name "<<character<<"\n";  

  return 0;
}
