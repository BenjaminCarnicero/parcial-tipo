#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

using namespace std;

//IMPORTANTE: este codigo es todo declarado, no hay nada definido. Todo se define en los .cpp

class Customer {

    private: // Atributos miembros
        string _code;
        string _name;
        string _address;

    public:
        Customer (string code, string name, string address);
        string getCode ();
        string getName ();
        string getAddress ();
};


#endif