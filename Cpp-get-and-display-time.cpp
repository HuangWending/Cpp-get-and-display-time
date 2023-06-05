#include <iostream>
#include <ctime>

int main() {
    std::time_t currentTime;
    std::time(&currentTime);
    std::cout << "当前时间: " << std::ctime(&currentTime);
  
    return 0;
}
