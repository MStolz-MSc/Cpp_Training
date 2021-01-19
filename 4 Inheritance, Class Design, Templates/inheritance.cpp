// Creating an object of a child class invokes the constructor of its parent class then calls the own constructor.
// If the parent class' constructor needs an argument, it can be passed by the child class.

#include <iostream>

class Foo
{
        public:
        Foo( int x )
        {
                std::cout << "Foo's constructor "
                          << "called with "
                          << x
                          << std::endl;
        }
};

class Bar : public Foo
{
        public:
        Bar() : Foo( 10 )  // construct the Foo part of Bar
        {
                std::cout << "Bar's constructor" << std::endl;
        }
};

int main()
{
        Bar stool;
}
