#include <cstdlib>
#include <iostream>
#include <vector>
#include <numeric>
#include <sstream>

int main(){

    // populate the vector with a sequence of numbers
    // print the even numbers
    std::vector<int> num(10);
    std::iota(std::begin(num), std::end(num), 1);

    for(auto i: num){
        if(i % 2 == 0)
            std::cout<<i<<std::endl;
    }

    return 0;
}
