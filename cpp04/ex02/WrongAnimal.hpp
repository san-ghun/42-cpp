#ifndef WRONGAnimal_HPP
#define WRONGAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();

        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        
        void makeSound() const;
        virtual void setType(std::string type);
        virtual std::string getType() const;
};

#endif