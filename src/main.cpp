#include<iostream>
#include<string.h>

class Person
{
    public:
        Person(int age, std::string name) : age(age) , name(name) {};
        int age;
        std::string name;
        void Prezentare()
    {
        std::cout<<"Numele meu este "<<this->name <<"si am "<<this->age<<" `ani "<<std::endl;
    }
};
int main()
{
    Person Paul(22,"Paul");

    Paul.Prezentare(); 
    return 0;
}