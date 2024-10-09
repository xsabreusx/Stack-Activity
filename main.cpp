#include <iostream>
#include <cassert>
#include <vector>
using namespace std;
class Stack {
  private:
  vector<int> v;
  public:
  void push(int element) {
      
  }

  int pop() {
    if (v.size()==0)
    {
      return -1;
    }
    else {
      int p = 0;
      p = v[v.size()-1];
      v.pop_back();
      return p;
    }
    

  }
  
  int peek(){
      return this->v[(this->v.size() -1)];
  }
  
};

int main() 
{



    return 0;
}