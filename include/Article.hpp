#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

using namespace std;

//IMPORTANTE: este codigo es todo declarado, no hay nada definido. Todo se define en los .cpp

class Article {

    private: // Atributos miembros
        string _code;
        string _name;
        double _price;

    public:
        Article (string code, string name, double price);
        string getCode ();
        string getName ();
        double getPrice ();
};


#endif