#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <limits>

int main(){

    // If age is 5 go to Kindergarten
    // 6 through 17 go to grade 1 through 12
    // If age > 17 go to college

    std::cout<<"Min limit of int: "<<std::numeric_limits<int>::min()<<std::endl;
    std::cout<<"Max limit of int: "<<std::numeric_limits<int>::max()<<std::endl;
    std::cout<<"Enter age: ";
    int age;
    std::cin>>age;
    if(age < 5){
        std::cout<<"Too young for school!"<<std::endl;
    } else if(age == 5){
        std::cout<<"Go to Kindergarten."<<std::endl;
    } else if((age >= 6) && (age <= 17)){
        std::cout<<"Go to grade "<<age - 5<<"."<<std::endl;
    } else{
        std::cout<<"Go to College. "<<std::endl;
    }

    return 0;
}
