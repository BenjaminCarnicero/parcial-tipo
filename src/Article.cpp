#include "Article.hpp"

/* 
operador :: llamado ambito
defino el constructor

Article::Article(string code, string name, double price) : code (code), name (name), price(price) {}
Esta forma tambien funciona

*/ 

Article::Article(string code, string name, double price) {
    // Parametros que ingresan
    _code = code;
    _name = name;
    _price = price;

}


string Article::getCode () {

    return this->_code;


}

string Article::getName () {

    return this->_name;


}


double Article::getPrice() {

    return this->_price;

}