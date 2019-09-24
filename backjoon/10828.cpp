// 10828 번 문제
// stack
// 2018 FOSCAR Algorithm
// 2018 . 11 .21

#include <iostream>
#include <string>
using namespace std;

class Stack
{
public:

  bool full;
  bool empty;
  unsigned int data[10001];
  int size;

  Stack()
  {
    full = false;
    empty = true;
    size = 0;
  }
  void push(int);
  int pop();
  int getSize();
  bool isEmpty();
  int getTop();

};

void Stack::push(int key)
{
  if(!full)
  {
    data[size++] = key;
    empty = 0;
    if(size == 10000)
      full = true;
  }
}

int Stack::pop()
{
  int temp;
  if(!empty)
  {
    temp = data[--size];

    if(size==0)
    {
      empty = true;
    }

    return temp;
  }
  else
  {
    return -1;
  }
}

int Stack::getSize()
{
  return size;
}

bool Stack::isEmpty()
{
  return empty;
}

int Stack::getTop()
{
  if(!empty)
    return data[size-1];
  else
    return -1;
}

int main()
{
  string temp;
  int x,number;

  Stack me;
  cin >> x;

  for(int i = 0; i<x; i++)
  {
    cin >> temp;
    //cout << temp;
    if(temp == "push")
    {
      //cout << "push" << endl;
      cin >> number;
      me.push(number);
    }
    else if(temp=="top")
    {
      //cout << "top" << endl;
      cout << me.getTop() << endl;
    }
    else if(temp=="size")
    {
      //cout << "size" << endl;
      cout << me.getSize() << endl;
    }
    else if(temp=="empty")
    {
      //cout << "empty" << endl;
      cout << me.isEmpty() << endl;
    }
    else
    {
      //cout << "pop" << endl;
      cout << me.pop() << endl;
    }
  }

}
