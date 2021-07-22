#include <iostream>
#include <string>
#include <vector>

std::vector<int> FindSubstringMatches(std::string theString, std::string theSubstring);
std::string ReplaceAllSubstring(std::string theString, std::string oldSubstring, std::string newSubstring);

int main() {
    std::string phrase = "to be or not to be";
    std::vector<int> matches = FindSubstringMatches(phrase, "be");
    for(int i = 0; i < matches.size(); i++) {
        std::cout << matches[i] << "\n";
    }

    std::cout << ReplaceAllSubstring("to know or not to know", "know", "be") << "\n";
    return 0;
}

std::vector<int> FindSubstringMatches(std::string theString, std::string substring) {
    std::vector<int> matchingIndices;
    int index = theString.find(substring, 0);
    while(index != std::string::npos) {
        matchingIndices.push_back(index);
        index = theString.find(substring, index + 1);
    }
    return matchingIndices;
}

std::string ReplaceAllSubstring(std::string theString, std::string oldSubstring, std::string newSubstring) {
    std::vector<int> substringMatches = FindSubstringMatches(theString, oldSubstring);
    if(substringMatches.size() != 0) {
        int lengthDifference = newSubstring.size() - oldSubstring.size();
        int timesLooped = 0;
        for(auto index: substringMatches) {
            theString.replace(index + (timesLooped * lengthDifference), oldSubstring.size(), newSubstring);
            timesLooped++;
        }
    }
    return theString;
}
