#include <iostream>

int main(int argc, char* argv[])
{
    if (argc < 4){
        std::cerr << "Invalid amount of arguments - requires at least 3" << std::endl;
        return 1;
    }
    std::cout << "Print all the arguments: " << std::endl;
    for (int i = 1; i < argc; ++i){
        std::cout << "arg[" << i << "] = " << argv[i] << std::endl;
    }
    
    return 0;
}