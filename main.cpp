#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <C:\Users\Relix\AppData\Local\Programs\Python\Python312\include\Python.h>


static const std::string people[] = {"Relix", "Nair"};

// class Parent {
// public:
//     std::string talk = "Coworkers, what's the dollar course today?";
// };

// class Child : public Parent {
// public:
//     std::string talk = "Mamya";
//     int da = 9;
// };

int main ()
{
    PyConfig config = PyConfig_InitPythonConfig();
    config.program_name = L"my_program";
    Py_InitializeFromConfig(&config);

    Py_Finalize();
    huy
    	kaki
    return 0;
    // std::fstream file("forcpp.py");
    // if (file.is_open())
    // {
    //     std::string line;
    //     while (std::getline(file, line)) {
    //         std::cout << line << std::endl;
    //     }
    // }

    // std::cout << "Welcome to the code playground! Feel free to chill and learn IT here!" << std::endl;
    // std::cout << "People connected to this  repository:";
    // for(int i = 0; i < sizeof(people)/sizeof(people[0]); i++)
    // { std::cout << std::endl << people[i]; };
    // Child* first = new Child();
    // Child* second = dynamic_cast<Child*>(first);
    // std::cout << std::endl << second->talk;
    
}

