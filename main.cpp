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
}

int main()
{
    Function();
    std::cin.get();
}
