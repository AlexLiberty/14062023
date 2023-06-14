#include <iostream>

using namespace std;

template <typename T>

class Pair 
{
private:
    T first;
    T second;
public:
    Pair() : first(), second() {}

    Pair(const T& firstValue, const T& secondValue) : first(firstValue), second(secondValue) {}

    T getFirst() const 
    {
        return first;
    }


    T getSecond() const 
    {
        return second;
    }

    void setFirst(const T& newValue) 
    {
        first = newValue;
    }

    void setSecond(const T& newValue) 
    {
        second = newValue;
    }

    void swap() 
    {
        T temp = first;
        first = second;
        second = temp;
    }

};

int main()
{
    Pair<int> intPair(10, 20);

    cout << "First: " << intPair.getFirst() <<endl; 
    cout << "Second: " << intPair.getSecond() <<endl;

    intPair.setFirst(30);
    intPair.setSecond(40);

    cout << "First: " << intPair.getFirst() <<endl; 
    cout << "Second: " << intPair.getSecond() <<endl; 
  
    intPair.swap();

    cout << "First: " << intPair.getFirst() <<endl;
    cout << "Second: " << intPair.getSecond() <<endl;

    Pair<double> doublePair(3.14, 2.718);

    cout << "First: " << doublePair.getFirst() <<endl;
    cout << "Second: " << doublePair.getSecond() <<endl; 

    return 0;
}


