#include <iostream>
#include <vector>
using namespace std;


class Product {
    public:
        string name;
        int code;
        Product(string name, int code){
            this->name=name;
            this->code=code;
        }
};

string input_name;
int input_code;
vector<Product> product;

int main() {
    product.push_back(Product("codetree",50));
    cin >> input_name >> input_code;
    product.push_back(Product(input_name,input_code));
    for (int i = 0; i<product.size(); i++){
        cout << "product " << product[i].code << " is " << product[i].name << "\n";
    }
    return 0;
}