// A simple program that computes the square root of a number
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
 
int main (int argc, char *argv[])
{
    {
        auto i = 42;  
        std::cout << "hello";
    }
    
    {
        std::map<std::string, std::vector<int>> map;
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
    
    {
        {
        std::string s("hello");
        int m=int(); //default initialization
        }
        {
        // You can also use the = notation for the same purpose in certain cases:
        std::string s="hello";
        int x=5;
        }
        {
        // For POD aggregates, you use braces:
        int arr[4]={0,1,2,3};
        struct tm today={0};
        }
        {
        // Finally, constructors use member initializers:

        struct S {
         int x;
         S(): x(0) {} };
         }
         {
        // This proliferation is a fertile source for confusion, not only among novices. Worse yet, in C++03 you can’t initialize POD array members and POD arrays allocated using new[]. C++11 cleans up this mess with a uniform brace notation:

        class C
        {
        int a;
        int b;
        public:
         C(int i, int j);
        };

        C c {0,0}; //C++11 only. Equivalent to: C c(0,0);

        int* a = new int[3] { 1, 2, 0 }; //C++11 only

        class X {
          int a[4];
        public:
          X() : a{1,2,3,4} {} //C++11, member array initializer
        };
        }
        {
        // With respect to containers, you can say goodbye to a long list of push_back() calls. In C++11 you can initialize containers intuitively:

        // C++11 container initializer
        std::vector<std::string> vs={ "first", "second", "third"};
        std::map<std::string,std::string> singers =
          { {"Lady Gaga", "+1 (212) 555-7890"},
            {"Beyonce Knowles", "+1 (212) 555-0987"}};
        // Similarly, C++11 supports in-class initialization of data members:

        // class C
        // {
         // int a=7; //C++11 only
        // public:
         // C();
        // };
        }
        
        {
        // nullptr
        // At last, C++ has a keyword that designates a null pointer constant. nullptr replaces the bug-prone NULL macro and the literal 0 that have been used as null pointer substitutes for many years. nullptr is strongly-typed:

        void f(int); //#1
        void f(char *);//#2
        //C++03
        f(0); //which f is called?
        //C++11
        f(nullptr) //unambiguous, calls #2
        // nullptr is applicable to all pointer categories, including function pointers and pointers to members:

        // std::string str="hi";
        // const char *pc=str.c_str(); //data pointers
        // if (pc!=nullptr)
          // std::cout<<pc<<std::endl;
        // struct A
        // {
         // A()=default; //C++11
         // virtual ~A()=default; //C++11
        // };
        // int (A::*pmf)()=nullptr; //pointer to member function
        // void (*pmf)()=nullptr; //pointer to function
        }
    }
      
  return 0;
}