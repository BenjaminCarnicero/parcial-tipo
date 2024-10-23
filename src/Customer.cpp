#include "Customer.hpp"

/* 
operador :: llamado ambito
defino el constructor

Customer::Customer(string code, string name, double price) : code (code), name (name), price(price) {}
Esta forma tambien funciona

*/ 

Customer::Customer(string code, string name, string address) {
    // Parametros que ingresan
    _code = code;
    _name = name;
    _address = address;

}


string Customer::getCode () {

    return this->_code;


}

string Customer::getName () {

    return this->_name;


}


string Customer::getAddress() {

    return this->_address;

}