//g++ -std=c++11

#include <iostream>  //std::cout

#include <utility>  //std::move
#include <type_traits>  //std::is_same

//#define NDEBUG  //disable runtime assert
#include <assert.h>

using namespace std;

void test(int i, int j)
{
  //static_assert: compiling assert, if fales then compiling fail
  //pass
  static_assert(std::is_same<decltype(i + j), int>(), "i+j is lvalue");
  //pass
  static_assert(std::is_same<decltype(std::move(i + j)), int&&>(), "std::move(i+j) is rvalue");
  //error
  //--static_assert(std::is_same(delctype(i + j), int&&));

  //assert 运行时断言
  //pass
  assert( (std::is_same<decltype(i + j), int>()) );
  std::cout<<"(i+j) is lvalue"<<std::endl;
  //pass
  assert( (std::is_same<decltype(std::move(i + j)), int&&>()) );
  std::cout<<"std::move(i+j) is rvalue"<<std::endl;
  

}

int main(int argc, char* argv[])
{
  test(1, 2);
  return 0;
}
