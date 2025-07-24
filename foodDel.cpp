#include<iostream>
using namespace std;

class FoodDelivery {
    private:
        string customerName;
        string deliveryAddress;
        string foodItem;
        double totalPrice;

    public:
        FoodDelivery(string name, string address, string item, double price) {
            customerName = name;
            deliveryAddress = address;
            foodItem = item;
            totalPrice = price;
        }

        void displayOrderDetails() {
            cout << "Customer Name: " << customerName << endl;
            cout << "Delivery Address: " << deliveryAddress << endl;
            cout << "Food Item: " << foodItem << endl;
            cout << "Total Price: $" << totalPrice << endl;
        }
};

int main() {
    FoodDelivery order1("John Doe", "123 Main St", "Pizza", 19.99);
    order1.displayOrderDetails();

    return 0;
}

