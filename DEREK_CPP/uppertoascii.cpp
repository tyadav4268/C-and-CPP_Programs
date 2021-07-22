#include <iostream>
#include <string>


int main(){
    std::string inputStr;

    std::cout << "Enter a String in CAPITAL: ";
    getline(std::cin, inputStr);

    std::cout << inputStr << "\n";

    std::string secretStr = "";
    for(auto c: inputStr) {
        secretStr += std::to_string((int)c - 23);
    }

    std::cout << "Secet String: " << secretStr << "\n";

    std::string normalStr = "";
    for(int i = 0; i < secretStr.length(); i+=2){
        std::string sCharCode = "";
        sCharCode += secretStr[i];
        sCharCode += secretStr[i+1];

        int nCharCode = std::stoi(sCharCode);
        char cCharCode = nCharCode + 23;
        normalStr += cCharCode;
    }
    std::cout << "Normal String: " << normalStr << "\n";
    return 0;
}
