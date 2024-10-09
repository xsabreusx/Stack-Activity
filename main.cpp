#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template <typename T>
class Stack {
  private:
  
  vector<T> v;
  
  public:
  
  Stack(){}

  Stack(vector<T> v) {
      this->v = v;
  }

  void push(T element) {
      this->v.push_back(element);
  }

  T pop() 
  {

    if (v.size() == 0) 
    {
      throw runtime_error("Stack is empty. Cannot pop element.");
    } 
    else 
    {
      T p = v[v.size() - 1];
      v.pop_back();
      return p;
    }
  }
  
  T peek(){
    if (v.size() == 0) {
      throw runtime_error("Stack is empty. Cannot peek.");
    }
    return this->v[this->v.size() - 1];
  }

};

int main() 
{
    
    
  Stack <int> testStack;

  testStack.push(1);

  assert(testStack.pop() == 1);
  
  vector <int> v = {2, 3, 5};
  Stack <int> testStack2(v);
  assert(testStack2.pop()== 5);

  Stack <string> stringStack;   //testing the case of strings
  stringStack.push("Howdy");
  stringStack.push("Partner");
  assert(stringStack.pop() == "Partner");
  assert(stringStack.peek() == "Howdy");

  cout <<"\nTests passed.";


  return 0;
}