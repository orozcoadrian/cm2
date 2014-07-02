// A simple program that computes the square root of a number
#include <iostream>
#include <map>
#include <vector>
 
int main (int argc, char *argv[])
{
    {
        auto i = 42;  
        std::cout << "hello";
        std::map<std::string, std::vector<int>> map;
    }
    
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        map["one"] = v;

        for(const auto& kvp : map) 
        {
          std::cout << kvp.first << std::endl;

          for(auto v : kvp.second)
          {
             std::cout << v << std::endl;
          }
        }

        int arr[] = {1,2,3,4,5};
        for(int& e : arr) 
        {
          e = e*e;
          std::cout << e << std::endl;
        }
    }
    
    {
        enum class Options {None, One, All};
        Options o = Options::All;
        // std::cout << o << std::endl;
    }
    
    {
        int arr[] = {1,2,3};
        std::for_each(std::begin(arr), std::end(arr), [](int n) {std::cout << n << std::endl;});

        auto is_odd = [](int n) {return n%2==1;};
        auto pos = std::find_if(std::begin(arr), std::end(arr), is_odd);
        if(pos != std::end(arr))
          std::cout << *pos << std::endl;
    }
      
  return 0;
}