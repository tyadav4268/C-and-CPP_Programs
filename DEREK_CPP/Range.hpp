// Range funcion to return a vector of numbers between default
// start value = 0 and given end value with a default step size of 1

std::vector<int> Range(int end){
    std::vector<int> range;
    int i = 0;
    int step = 1;
    while(i <= end){
        range.push_back(i);
        i += step;
    }
    return range;
}

// Range funcion to return a vector of numbers between given
// start and end value with a default step size of 1

std::vector<int> Range(int start, int end){
    std::vector<int> range;
    int i = start;
    int step = 1;
    while(i <= end){
        range.push_back(i);
        i += step;
    }
    return range;
}

// Range funcion to return a vector of numbers between given
// start and end value with a given step size

std::vector<int> Range(int start, int end, int step){
    std::vector<int> range;
    int i = start;
    while(i <= end){
        range.push_back(i);
        i += step;
    }
    return range;
}
