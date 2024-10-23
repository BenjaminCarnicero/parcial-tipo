#include <iostream>
#include "Article.hpp"
#include "Customer.hpp"
#include "Order.hpp"

using namespace std;

int main () {

    // Articulos
    Article* article1 = new Article ("A001", "FacialCream", 15.99);
    Article* article2 = new Article ("A002", "Perfum", 9.99);
    Article* article3 = new Article ("A003", "Lipstick", 7.99);


    // Clientes
    Customer* customer1 = new Customer ("C001", "Carlos", "Formosa 1852");
    Customer* customer2 = new Customer ("C002", "Alberto", "Lavalle 4854");
    Customer* customer3 = new Customer ("C003", "Deyverson Brum Silva", "Tejedor 384");


    //Pedidos para clientes
    Order* orderCustomer1 = new Order ("0001", customer1);
    orderCustomer1-> attach(article1);
    orderCustomer1-> attach(article2);
    orderCustomer1-> attach(article3);


    Order* orderCustomer2 = new Order ("0002", customer2);
    orderCustomer2-> attach(article1);
    orderCustomer2-> attach(article2);
    orderCustomer2-> attach(article3);


    Order* orderCustomer3 = new Order ("0003", customer3);
    orderCustomer3-> attach(article1);
    orderCustomer3-> attach(article2);
    orderCustomer3-> attach(article3);



    //Mostrar pedidos
    orderCustomer1-> show();
    orderCustomer2-> show();
    orderCustomer3-> show();


    //Liberar la memoria
    delete article1;
    delete article2;
    delete article3;
    delete customer1;
    delete customer2;
    delete customer3;
    delete orderCustomer1;
    delete orderCustomer2;
    delete orderCustomer3;


    return 0;
}