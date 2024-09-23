#include <iostream>

// Destructors!!!

class Entity
{
public:
    float X, Y;

    // without defining a constructor you still have a default constructor that does nothing, ex:
    Entity()
    {
        X = 0.0f; // initializing X to 0
        Y = 0.0f; // initializing Y to 0
        std::cout << "Created Entity!" << std::endl;
    }

    // To declare a destructor, use the '~' infront of the class name
    // If you initialize things in the constructor, you will want to use a destructor to prevent memory leaks
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    // example print method
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function()
{
    // instantiating the Entity class
    Entity e;
    e.Print();
    e.~Entity(); // another way to call the destructor, not used very often
}

int main()
{
    Function();
    std::cin.get();
}
