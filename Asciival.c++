//Ascii value is an integer number between 0 and 127
//For example, ASCII value of 'A' is 65.

//What this means is that, if you assign 'A' to a character variable, 
//65 is stored in that variable rather than 'A' itself.

#include <iostream>
using namespace std;

int main() {
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}