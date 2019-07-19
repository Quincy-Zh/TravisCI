#include <iostream>

int main(int argc, const char *argv[])
{
    int os_flag = 0;

    std::cout << "Hello, Travis CI.\n";
    
    #ifdef _UNIX
    os_flag = 1;
    std::cout << "Unix OS!\n";
    #endif

    #if defined(__WINDOWS_) || defined(_WIN32)
    os_flag = 2;
    std::cout << "WINDOWS OS!\n";
    #endif

    #ifdef linux
    os_flag = 3;
    std::cout << "Linux OS!\n";
    #endif

    if(os_flag == 0)
    {
        std::cout << "Unkown OS.\n";
    }

    return 0;
}

