#include <iostream>


int main()
{
     auto Hello = []()    
     {
          std::cout << "hello world" << std::endl;
     };

      Hello();
     int days;
     auto Bye = [&days](int a)
     {
          days = a;
     };

     Bye(46);
     std::cout << days << std::endl;
}