#include <iostream>
#include <vector>

int main(){

    /*
        How tall is the Pine Tree: 5
            #
           ###
          #####
         #######
        #########
            #
    */
    int h;
    std::cout<<"How tall is the Pine Tree: ";
    std::cin>>h;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < h-i-1; j++){
            std::cout<<" ";
        }
        for (int k = 0; k <= i; k++){
            std::cout<<"#";
        }
        for(int l = 0; l < i; l++){
            std::cout<<"#";
        }
        std::cout<<"\n";
    }
    
    int m = 1;
    while (m < h){
        std::cout<<" ";
        m++;
    }
    std::cout<<"#"<<"\n";
    return 0;
}
