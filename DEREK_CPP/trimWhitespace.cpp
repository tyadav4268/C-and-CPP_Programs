#include <iostream>
#include <vector>
#include <string>


std::string TrimWhitespace(std::string theString);

int main() {
    std::string aStr = "     Just a string      ";
    aStr = TrimWhitespace(aStr);
    std::cout << "*" << aStr <<"*\n";
    return 0;
}

std::string TrimWhitespace(std::string theString) {
    std::string whitespaces = " \t\f\n\r";
    theString.erase(theString.find_last_not_of(whitespaces) + 1);
    theString.erase(0, theString.find_first_not_of(whitespaces));
    return theString;
}
