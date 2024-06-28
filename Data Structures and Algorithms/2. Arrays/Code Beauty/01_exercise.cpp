#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;
    char type;
    // Default constructor
    Product(){}
    // constructor with data member initialized
    Product(string name, double price, char type){
        this->name = name;
        this->price = price;
        this->type = type;
    }
};

int main() {
    int n;
    puts("Enter total number of products: ");
    cin >> n;

    Product products[n];
    for(int i = 0; i < n; i++){
        Product p;
        cout << "Enter " << " product: " << i + 1 << " \n";
        puts("Enter product name: ");
        cin >> p.name;
        puts("Enter product price: ");
        cin >> p.price;
        puts("Enter product type: ");
        cin >> p.type;

        products[i] = p;
    }

    double clothing_price = 0, grocery_price = 0, tech_price = 0;

    for(int i = 0; i < n; i++){
        if(products[i].type == 'c'){
            clothing_price += products[i].price;
        }
        else if(products[i].type == 't'){
            tech_price += products[i].price;
        }
        else if(products[i].type == 'v'){
            grocery_price += products[i].price;
        }
    }

    cout << "total clothing price: " << clothing_price << "TAKA \n";
    cout << "total tech price: " << tech_price << "TAKA \n";
    cout << "total vegetables price: " << grocery_price << "TAKA \n";

    double total_cost = clothing_price + tech_price + grocery_price;
    cout << "Total cost is: " << total_cost << "TAKA \n";

    cout << "Total cost with vat: ";
    return 0;
}



