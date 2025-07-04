🔍 Description
This project is a basic simulation of an online store backend system built using C++ and Standard Template Library (STL) containers. It demonstrates how real-world e-commerce operations can be modeled with STL data structures such as vector, deque, list, set, map, and unordered_map.

The application covers:

Managing a list of products and categories

Maintaining order history

Tracking customer data

Handling product stock

Simulating recent customer interactions

It is ideal for learning or demonstrating your understanding of STL containers in C++.

🚀 Features
✅ Store and display available products

✅ Track recent customers using a deque

✅ Record order history with timestamps

✅ Maintain product stock using maps

✅ Display product categories using sets

✅ Organize customer data and orders using maps and multimaps

✅ Store unique product IDs using unordered sets

📂 STL Containers Used
Container	Purpose
vector<Product>	List of products in the store
deque<string>	Recent customer activity
list<Order>	Order history with timestamps
set<string>	Unique product categories
map<int, int>	Product stock by ProductID
multimap<string, Order>	Orders made by each customer
unordered_map<string, string>	Customer ID to customer name mapping
unordered_set<int>	Unique product IDs

🧪 Sample Output
txt
Copy
Edit
Available Products:
ProductID: 101, Name: Laptop, Category: Electronics
ProductID: 102, Name: SmarPhone, Category: Electronics
...

Recent Customers:
C005 C001 C002 C003 C004 

Order History:
OrderID: 1, ProductID: 101, Quantity: 1, CustomerID: C001, Date: Thu Jul  4 15:33:06 2025
...

Product Categories:
Electronics
Home
Kitchen

...
📁 Files
main.cpp – Contains the entire logic and data structures

README.md – Project overview and instructions

🛠️ How to Compile & Run
bash
Copy
Edit
g++ -std=c++17 -o store main.cpp
./store
Make sure you're using a C++17-compatible compiler to support ctime usage and structured bindings.

📘 Learning Goals
This project is great for practicing:

STL containers and iteration

Structs and object-oriented design in C++

Timestamps and formatted output

Real-world simulation of store operations
