#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>

int main(){

    // Creates a vector of words from the given sentence
    
    std::string sSentence("This is a sample sentence");
    std::cout<<"Enter any sentence: ";
    getline(std::cin, sSentence);
    std::stringstream ss(sSentence);
    std::vector<std::string> vecWords;
    std::string sIndivstr;
    char cSpace = ' ';

    while(getline(ss, sIndivstr, cSpace)){
        vecWords.push_back(sIndivstr);
    }

    for(int i = 0; i < vecWords.size(); i++){
        std::cout<<vecWords[i]<<std::endl;
    }
}
