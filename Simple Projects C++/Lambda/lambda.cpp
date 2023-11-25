#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
   auto Hello = []()    
   {
        std::cout << "hello world" << std::endl;
   };

    Hello();

}