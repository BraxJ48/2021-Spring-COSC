// Christmas Tree Function Program
// Braxton Johnson 20210422
#include <iostream>

void printTree(int intpHeight) {
     int intNumberofleaves = 1;
     for(int intBranches = 1; intBranches < intpHeight; intBranches++) {
        //Add spaces before printing the branches
        for(int intcountspace = (intpHeight - intBranches); intcountspace > 0; intcountspace--) {
            std::cout << " ";
    }
    //Print out the number of leaves based on the branch
    for(int intcountleaves = 1; intcountleaves <= intNumberofleaves; intcountleaves++) {
        std::cout << "*";
    }
    std::cout << std::endl;
    //Add leaves for the next branch
    intNumberofleaves+=2;
}
for(int intcountspace = (intpHeight - 1); intcountspace > 0; intcountspace--) {
    std::cout << " ";
}
std::cout <<  "*" << std::endl;
}
int main() {


int  intNumberofline = 0;

std::cout << "please enter desired height of tree";

//Input for tree height
std::cin >> intNumberofline;

std::cout << std::endl;

printTree(intNumberofline);

std::cout << std::endl;

//std::cout << "   *" << std::endl;
//std::cout << "  ***" << std::endl;
//std::cout << " *****" << std::endl;
//std::cout << "   *" << std::endl;

//printTree(intNumberofline + 2);

    return 0;

} 