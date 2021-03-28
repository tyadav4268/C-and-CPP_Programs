#include <iostream>
#include <vector>
#include "Range.hpp"


int main(){

    // How much to invest: 1000
    // interest_rate: 8
    // Value after 10 years: 2158.92

    double investment = 0.0, interest_rate = 0.0;
    std::cout<<"How much to invest: ";
    std::cin>>investment;
    std::cout<<"Interest Rate: ";
    std::cin>>interest_rate;
    interest_rate *= 0.01;
    for (auto i: Range(1, 10)){
        investment += (investment * interest_rate);
    }
    std::cout<<"Value after 10 years: "<< investment<<"\n";
}
