  #include "Order.hpp"

  Order::Order(string code, Customer* customer) {

    this->code = code;
    this->customer = customer;

  }

  
  void Order::attach(Article* article) {

    this->articleList.push_front(article);
  }


  void Order::show () {

    for (Article* article : articleList) {
      
      cout << "Cliente: " << this->customer->getName() << endl;
      cout << "Articulo: " << article->getCode() << endl;
      cout << "Nombre del articulo: " << article->getName() << endl;
      cout << "Precio del articulo: " << article->getPrice() << endl;
      cout << endl;
      cout << endl;
    }

  }