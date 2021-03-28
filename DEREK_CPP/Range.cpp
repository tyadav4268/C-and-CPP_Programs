#include <iostream>
#include <vector>
// #include <numeric>

std::vector<int> get_range(int start, int end, int step);

int main(){
    std::vector<int> range1;
    range1 = get_range(1, 10, 2);
    for (auto i: range1) std::cout<<i<<"\n";
    return 0;
}

// A funcion to return a vector of numbers between given
// start and end value with a given step
std::vector<int> get_range(int start, int end, int step){
    std::vector<int> my_range;
    int i = start;
    while(i <= end){
        my_range.push_back(i);
        i += step;
    }
    // std::iota(std::begin(my_range), std::end(my_range), start);
    return my_range;
}
