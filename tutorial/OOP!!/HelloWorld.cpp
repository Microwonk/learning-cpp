#include <iostream>

class Animal{
    public:
        bool alive = true;
        std::string name;
        std::string breed;
        int age;

        void kill() {
            this->alive = false;
        }
};

class Dog : public Animal{

};

class Cat : public Animal{
    private:
        std::string name;
        std::string breed;
        int age;


    public:

        // instead of this. its this->
        // constructor overloading works the same as functs or in java
        Cat(std::string name, std::string breed, int age) {
            this->name = name;
            this->breed = breed;
            this->age = age;
        }
        // empty constructor, can be done not with Cat olf(); but with -> Cat olf;
        Cat() {

        }
        
        // dont need this-> but makes it clearer
        void eat() {
            std::cout << this->name << " is eating\n";
        }

        void drink() {
            std::cout << this->name << " is drinking\n";
        }

        void sleep() {
            std::cout << this->name << " is sleeping\n";
        }

        void setAge(int age) {
            this->age = age;
        }

        void setAge(std::string name) {
            this->name = name;
        }

        void setAge(std::string breed) {
            this->breed = breed;
        }
        // ~~ getters too -> should only be used when modifying has rules to it e.g. no neg int, no long string etc.


        // deconstructor
        ~Cat() {
            //delete this->age; -> needs to be a pointer
        }

};

int main() {

    Cat olf("Olf", "Weirdo", 6);
    
    olf.eat();
    olf.sleep();

    return 0;
}