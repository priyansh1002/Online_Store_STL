#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>        //it is present in c++17
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct Product{
    int productID;
    string name;
    string category;
};

struct Order{
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;    //Its is from ctime
};

int main(){
    vector<Product> products={
        {101,"Laptop","Electronics"},
        {102,"SmarPhone","Electronics"},
        {103,"Coffee Maker","Kitchen"},
        {104,"Blender","Kitchen"},
        {105,"Desk Lamp","Home"},
    };
    
    deque<string> recentCustomers={"C001","C002","C003"};
     
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005"); 
    
    list<Order> orderHistory;
    
    orderHistory.push_back({1,101,1,"C001",time(0)});
    orderHistory.push_back({2,102,2,"C002",time(0)});
    orderHistory.push_back({3,103,1,"C003",time(0)});
    
    set<string> categories;
    
    for(const auto &product: products){   //auto is used to deduce its type we dont have to tell the datatype
     categories.insert(product.category);
    }
    
    map<int,int> productStock={
        {101,10},
        {102,20},
        {103,15},
        {104,5},
        {105,7},
    }; 
    
    multimap<string,Order> customerOrders;
    for(const auto &order:orderHistory){
        customerOrders.insert({order.customerID, order});
    }
    
    unordered_map<string,string> customerData={
        {"C001","Alice"},
        {"C002","Priyansh"},
        {"C003","vidya"},
        {"C004","maxim"},
        {"C005","ansh"},
        
    };
    
    unordered_set<int> uniqueProductIDs;
    
    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }
    
    cout << "Available Products:\n";
    for (const auto &product : products) {
    cout << "ProductID: " << product.productID
         << ", Name: " << product.name
         << ", Category: " << product.category << '\n';
}
    cout << '\n';

   cout << "Recent Customers:\n";
   for (const auto &cust : recentCustomers) {
    cout << cust << " ";
}
   cout << "\n\n";


   cout << "Order History:\n";
   for (const auto &order : orderHistory) {
    cout << "OrderID: " << order.orderID
         << ", ProductID: " << order.ProductID
         << ", Quantity: " << order.quantity
         << ", CustomerID: " << order.customerID
         << ", Date: " << ctime(&order.orderDate); // formatted time
}
    cout << '\n';


    cout << "Product Categories:\n";
    for (const auto &cat : categories) {
    cout << cat << '\n';
}
    cout << '\n';

    cout << "Product Stock:\n";
    for (const auto &entry : productStock) {
    cout << "ProductID: " << entry.first << ", Stock: " << entry.second << '\n';
}
    cout << '\n';


    cout << "Customer Orders:\n";
    for (const auto &entry : customerOrders) {
    const Order &order = entry.second;
    cout << "CustomerID: " << entry.first
         << ", OrderID: " << order.orderID
         << ", ProductID: " << order.ProductID
         << ", Quantity: " << order.quantity
         << ", Date: " << ctime(&order.orderDate);
}
    cout << '\n';


    cout << "Customer Data:\n";
    for (const auto &entry : customerData) {
    cout << "CustomerID: " << entry.first << ", Name: " << entry.second << '\n';
}
    cout << '\n';

    cout << "Unique Product IDs:\n";
    for (const auto &id : uniqueProductIDs) {
    cout << id << " ";
}
    cout << '\n';

    
    
    return 0;
}
