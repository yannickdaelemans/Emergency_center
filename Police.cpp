#include "Police.h"

#include <iostream>

Police::Police(void){
    std::cout<< "Police action added"<< std::endl;
}

void Police::acting() {
    // This methods prints out the call for the police, normally it should actually call the police
    std::cout << "Calling the police" << std::endl;
}
