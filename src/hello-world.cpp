#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "OS is: "
#ifdef __linux__
    << "Linux"
#elif __APPLE__
    << "Mac"
#endif
    << std::endl;
}