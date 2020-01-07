//g++

class OnlyCopy
{
private:
  int value_ = 0;

public:
  OnlyCopy(){};
  OnlyCopy(int v):valuei_(v) explicit {};  //explicit: stop compiler to cast int as OnlyCopy object by hidden_cast.
  OnlyCopy(const OnlyCopy& obj);
  
  OnlyCopy& oprator=(const OnlyCopy& obj);

  ~OnlyCopy(){};
}; 


