#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();

        Brain(Brain const &src);
        Brain &operator=(Brain const &obj);

        std::string	ideas[100];

        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
};

#endif