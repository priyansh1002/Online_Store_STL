
# 📦 Simple Online Store Management (C++ STL Project)

## 📖 Description

This project is a **console-based simulation** of an online store management system built using **C++17** and STL (Standard Template Library).  
It showcases how to model a mini e-commerce backend system using various C++ data structures.

---

## 🧠 Features

- 🛍️ **Manage Products** – Store product info (ID, name, category)
- 👥 **Track Recent Customers** – Using `deque`
- 🧾 **Order History** – Store orders with timestamps using `list`
- 🏷️ **Product Categories** – Store unique categories using `set`
- 📦 **Inventory Management** – Stock tracking with `map`
- 📊 **Customer Order Mapping** – Using `multimap`
- 🔎 **Customer Data Storage** – Fast access via `unordered_map`
- 🔐 **Unique Product IDs** – Ensured via `unordered_set`

---

## 🧰 STL Containers Used

| STL Container         | Purpose                                 |
|-----------------------|-----------------------------------------|
| `vector<Product>`     | List of all available products          |
| `deque<string>`       | Track recently active customers         |
| `list<Order>`         | Maintain order history with timestamps  |
| `set<string>`         | Store unique product categories         |
| `map<int, int>`       | Track stock by product ID               |
| `multimap<string,Order>` | Map multiple orders to each customer |
| `unordered_map<string, string>` | Store customer names         |
| `unordered_set<int>`  | Track unique product IDs                |

---

## 🧪 Sample Output

```
Available Products:
ProductID: 101, Name: Laptop, Category: Electronics
...

Recent Customers:
C005 C001 C002 C003 C004 

Order History:
OrderID: 1, ProductID: 101, Quantity: 1, CustomerID: C001, Date: Thu Jul  4 16:21:18 2025
...

Product Categories:
Electronics
Kitchen
Home

...
```

---

## 🛠️ How to Compile & Run

```bash
g++ -std=c++17 -o store main.cpp
./store
```

✅ Make sure your compiler supports **C++17 or later** for `ctime` and STL features.

---

## 📁 Project Structure

```
├── main.cpp       # Source code
└── README.md      # Project documentation
```

---

## 🎯 Learning Objectives

- Master various STL containers
- Understand object-oriented programming with `struct`
- Work with time functions using `<ctime>`
- Simulate real-world store operations in code

---

## 👤 Author

**👨‍💻 Priyansh Singh Chaudhary
📍 Student | Competitive Programmer | C++ Enthusiast

---
