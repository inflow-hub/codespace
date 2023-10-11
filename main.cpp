#include <iostream>
#include <string>


static const std::string people[] = {"Relix", "Nair"};

class Parent {
public:
    std::string talk = "Coworkers, what's the dollar course today?";
};

class Child : public Parent {
public:
    std::string talk = "Mamya";
    int da = 9;
};

int main ()
{
    std::cout << "Welcome to the code playground! Feel free to chill and learn IT here!" << std::endl;
    std::cout << "People connected to this  repository:";
    for(int i = 0; i < sizeof(people)/sizeof(people[0]); i++)
    { std::cout << std::endl << people[i]; };
    Child* first = new Child();
    Child* second = dynamic_cast<Child*>(first);
    std::cout << std::endl << second->talk;
    
}

