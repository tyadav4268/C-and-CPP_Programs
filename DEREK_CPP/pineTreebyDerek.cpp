#include <iostream>
#include <vector>
#include "Range.hpp" // previously created

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
    std::cout<<"How tall is the tree: ";
    int tree_height = 0, spaces = 0, hashes = 1, stump_spaces = 0;
    std::cin>>tree_height;
    spaces = tree_height - 1;
    stump_spaces = tree_height - 1;

    while(tree_height != 0){
        for (auto i: Range(1, spaces))
            std::cout<<" ";
        for (auto i: Range(1, hashes))
            std::cout<<"#";
        std::cout<<"\n";
        hashes += 2;
        spaces -= 1;
        tree_height -= 1;
    }
    for (auto i: Range(1, stump_spaces))
        std::cout<<" ";
    std::cout<<"#";
    return 0;
}
