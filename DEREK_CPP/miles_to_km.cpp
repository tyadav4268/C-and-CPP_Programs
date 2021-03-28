#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>
#include <vector>

int main(int argc, char** argv){

    // Take value in miles through command line argument if provided
    // else asks user to ente value in miles
    // prints value in km
    
    std::string sMiles;
    if(argc != 1){
        std::cout<<"Entered value in miles: "<<argv[1]<<std::endl;
        sMiles = argv[1];
    }
    else{
        std::cout<<"Enter value in miles: ";
        getline(std::cin, sMiles);
    }
    double iMiles = std::stod(sMiles);
    printf("%f miles = %f km.\n", iMiles, iMiles*1.60934);

    return 0;
}
