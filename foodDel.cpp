// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <memory>
// using namespace std;
// class DeliveryPerson;

// class Order;

// class MenuItem;

// class User
// {
// protected:
//     int userID;
//     string name;

// public:
//     User(int id, const string &n) : userID(id), name(n) {}
//     virtual void display() const
//     {
//         cout << "User: " << name << endl;
//     }
//     int getUserID() const { return userID; }
//     virtual ~User() {} // Important for polymorphic deletion
// };

// class DeliveryPerson : public User
// {
// public:
//     DeliveryPerson(int id, const string &n) : User(id, n) {}
//     void deliverOrder(int orderID)
//     {
//         cout << "Delivering order ID: " << orderID << endl;
//     }
// };

// class MenuItem
// {
// private:
//     int itemID;
//     string name;
//     double price;

// public:
//     MenuItem(int id, const string &n, double p) : itemID(id), name(n), price(p) {}
//     void display() const
//     {
//         cout << "Item: " << name << " | Price: $" << price << endl;
//     }
//     double getPrice() const { return price; }
//     string getName() const { return name; }
// };

// class Restaurant
// {
// private:
//     int restaurantID;
//     string name;
//     vector<MenuItem> menu;
//     double totalRating; // Total of all ratings received
//     int ratingCount;    // Number of ratings received

// public:
//     Restaurant(int id, const string &n) : restaurantID(id), name(n), totalRating(0.0), ratingCount(0) {}

//     void addMenuItem(const MenuItem &item)
//     {
//         menu.push_back(item);
//     }

//     vector<MenuItem> getMenu() const
//     {
//         return menu;
//     }

//     void updateRating(double newRating)
//     {
//         totalRating += newRating;
//         ratingCount++;
//     }

//     double getAverageRating() const
//     {
//         return ratingCount > 0 ? totalRating / ratingCount : 0.0;
//     }

//     void displayMenu() const
//     {
//         cout << "Menu for " << name << ":" << endl;
//         for (const auto &item : menu)
//         {
//             item.display();
//         }
//     }

//     int getRestaurantID() const { return restaurantID; }
// };

// class Order
// {
// private:
//     int orderID;
//     int userID;
//     int restaurantID;
//     vector<MenuItem> items;
//     bool isDelivered;

// public:
//     Order(int oid, int uid, int rid, const vector<MenuItem> &its)
//         : orderID(oid), userID(uid), restaurantID(rid), items(its), isDelivered(false) {}

//     void markDelivered() { isDelivered = true; }

//     bool getStatus() const { return isDelivered; }

//     void displayOrder() const
//     {
//         cout << "Order ID: " << orderID << ", User ID: " << userID << endl;
//         for (const auto &item : items)
//         {
//             cout << "- " << item.getName() << " ($" << item.getPrice() << ")" << endl;
//         }
//     }

//     int getOrderID() const { return orderID; }
// };

// class DeliveryPlatform
// {
// private:
//     unordered_map<int, shared_ptr<User>> users;
//     unordered_map<int, shared_ptr<DeliveryPerson>> deliveryPersons;
//     unordered_map<int, Restaurant> restaurants;
//     unordered_map<int, Order> orders;
//     int nextOrderID = 1;

// public:
//     void addUser(shared_ptr<User> user)
//     {
//         users[user->getUserID()] = user;
//     }

//     void addDeliveryPerson(shared_ptr<DeliveryPerson> dp)
//     {
//         deliveryPersons[dp->getUserID()] = dp;
//     }

//     void addRestaurant(const Restaurant &res)
//     {
//         restaurants[res.getRestaurantID()] = res;
//     }

//     void placeOrder(int userID, int restaurantID, const vector<int> &itemIndices)
//     {
//         if (restaurants.find(restaurantID) == restaurants.end())
//         {
//             cout << "Restaurant not found!" << endl;
//             return;
//         }
//         vector<MenuItem> selectedItems;
//         const vector<MenuItem> &menu = restaurants[restaurantID].getMenu(); // Use reference
//         for (int idx : itemIndices)
//         {
//             if (idx >= 0 && idx < (int)menu.size())
//             {
//                 selectedItems.push_back(menu[idx]);
//             }
//         }
//         Order newOrder(nextOrderID, userID, restaurantID, selectedItems);
//         orders[nextOrderID] = newOrder;
//         cout << "Order placed successfully with Order ID: " << nextOrderID << endl;
//         nextOrderID++;
//     }

//     void assignDelivery(int orderID)
//     {
//         if (orders.find(orderID) == orders.end())
//         {
//             cout << "Order not found!" << endl;
//             return;
//         }
//         if (deliveryPersons.empty())
//         {
//             cout << "No delivery person available!" << endl;
//             return;
//         }
//         auto dp = deliveryPersons.begin()->second;
//         dp->deliverOrder(orderID);
//         orders[orderID].markDelivered();
//     }

//     void trackOrder(int orderID)
//     {
//         if (orders.find(orderID) == orders.end())
//         {
//             cout << "Order not found!" << endl;
//             return;
//         }
//         cout << "Order ID " << orderID << " is "
//              << (orders[orderID].getStatus() ? "delivered." : "being prepared.") << endl;
//     }

//     void rateRestaurant(int restaurantID, double rating)
//     {
//         if (restaurants.find(restaurantID) == restaurants.end())
//         {
//             cout << "Restaurant not found!" << endl;
//             return;
//         }
//         restaurants[restaurantID].updateRating(rating);
//         cout << "Thank you for rating!" << endl;
//     }

//     void referFriend(const string &referralCode)
//     {
//         cout << "Referral code " << referralCode << " applied successfully!" << endl;
//     }
// };

// int main()
// {
//     DeliveryPlatform platform;
//     platform.addUser(make_shared<User>(1, "Alice"));
//     platform.addDeliveryPerson(make_shared<DeliveryPerson>(2, "Bob"));
//     Restaurant rest1(101, "Pasta Palace");
//     rest1.addMenuItem(MenuItem(1, "Spaghetti", 12.99));
//     rest1.addMenuItem(MenuItem(2, "Lasagna", 14.99));
//     platform.addRestaurant(rest1);
//     platform.placeOrder(1, 101, {0, 1});
//     platform.assignDelivery(1);
//     platform.trackOrder(1);
//     platform.rateRestaurant(101, 4.5);
//     platform.referFriend("FRIEND100");
//     return 0;
// }
