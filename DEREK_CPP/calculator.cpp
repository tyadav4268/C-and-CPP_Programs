#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>

int main(){
    // Enter calculation (eg: 5 + 8):
    // 10 + 6
    // 10.0 + 6.0 = 16.0
    // please enter only +, -, *, /
    std::string expression;
    std::cout<<"Enter Calculation (eg: 4 + 3): ";
    getline(std::cin, expression);

    char cSpace = ' ';
    std::vector<std::string> vecBits;
    std::string indvBit;
    std::stringstream exp(expression);

    while(getline(exp, indvBit, cSpace)){
        vecBits.push_back(indvBit);
    }
    char operation = (char)vecBits[1][0];
    double result;
    switch(operation){
        case '+':
        result = std::stod(vecBits[0]) + std::stod(vecBits[2]);
        break;
        case '-':
        result = std::stod(vecBits[0]) - std::stod(vecBits[2]);
        break;
        case '*':
        result = std::stod(vecBits[0]) - std::stod(vecBits[2]);
        break;
        case '/':
        result = std::stod(vecBits[0]) / std::stod(vecBits[2]);
        break;
        default:
        std::cout<<"Please enter +, -, /, * only! ";
    }
    printf("%0.1f %c %0.1f = %0.1f\n", std::stod(vecBits[0]), operation, std::stod(vecBits[2]), result);
    return 0;
}
