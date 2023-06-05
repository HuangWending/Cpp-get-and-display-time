# Cpp-get-and-display-time
C++获取并显示当前时间的程序
#include <iostream>：包含输入输出流的头文件。
#include <ctime>：包含时间相关函数的头文件。
std::time_t currentTime：定义一个std::time_t类型的变量currentTime，用于存储时间值。
std::time(&currentTime)：调用std::time()函数获取当前时间的时间戳，并将其赋值给currentTime变量。
std::cout << "Current time: " << std::ctime(&currentTime);：使用std::cout输出流结合<<操作符和std::ctime()函数打印输出格式化后的时间。std::ctime()函数将时间戳转换为字符串，并将结果作为参数传递给std::cout进行输出。
return 0：表示程序正常结束。
