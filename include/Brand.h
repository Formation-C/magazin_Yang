#ifndef BRAND_H
#define BRAND_H
#include <iostream>

class Brand
{
    public:
        Brand();
        virtual ~Brand();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        std::string Getname() { return name; }
        void Setname(std::string val) { name = val; }
        std::string Getlogo() { return logo; }
        void Setlogo(std::string val) { logo = val; }

    protected:

    private:
        int id;
        std::string name;
        std::string logo;
};

#endif // BRAND_H
