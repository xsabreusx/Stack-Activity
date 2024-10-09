#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

class Stack {
  private:
  vector<int> v;
  
  public:
  
  Stack(){}

  Stack(vector<int> v) {
      this->v = v;
  }

  void push(int element) {
      this->v.push_back(element);
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
    
    
  Stack testStack;

  testStack.push(1);

  assert(testStack.pop() == 1);
  
  cout <<"\nTests passed.";


  return 0;
}