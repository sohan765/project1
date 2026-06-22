# project1
Brothers Mall Management System
Overview

The Brothers Mall Management System is a console-based C++ application that simulates a shopping experience in a mall environment. The system allows users to browse multiple stores, add products to a shopping cart, and generate a final bill with the total purchase amount.

This project demonstrates the practical implementation of Object-Oriented Programming (OOP) concepts such as inheritance, encapsulation, constructors, friend classes, structures, vectors, and polymorphic design principles.

Features
Multiple shopping categories:
Grocery Store
Food Store
Bakery & Sweets Shop
Toy Store
Stationery Store
Electronics Store
Product Management
View available products with IDs and prices.
Add products to the shopping cart.
Specify product quantity and purchase details.
Cart Management
Display all selected products.
Calculate the total bill amount automatically.
User-Friendly Console Interface
Interactive menu-driven navigation.
Continuous shopping across different stores.
Technologies Used
C++
Standard Template Library (STL)
Vector
String
Object-Oriented Programming Concepts
OOP Concepts Implemented
1. Classes and Objects

The project is structured using multiple classes such as:

Mall
Shop
Grocery
Food
Sweets
Toy
Statinery
Electronic
Cart
Amount
2. Inheritance

The Shop class serves as the base class, while all store classes inherit from it.

class Grocery : public Shop
class Food : public Shop
class Sweets : public Shop
3. Encapsulation

Product information such as ID, amount, and quantity is maintained as private members of the Shop class.

4. Friend Classes

Store classes are declared as friend classes to access private members of the base class.

5. Constructors

Both default and parameterized constructors are used throughout the application.

6. Structures

A structure named Bill is used to store product purchase details.

7. Vector STL

The application uses a global vector to store all purchased items dynamically.

Project Structure
Brothers-Mall-Management-System/
│
├── main.cpp
├── README.md
Workflow
User enters the mall system.
Selects a store category.
Views available products.
Enters product ID, price, and quantity.
Adds products to the cart.
Continues shopping or exits.
Cart displays all purchased items.
Final bill amount is generated.
Sample Output
-------------------- Welcome in Brothers Mall --------------------

There are Following Shops are Available

1 For Grocery Store
2 For Food Shop
3 For Bakery Shop
4 For Toy Shop
5 For Statinory Store
6 For Electronics Devices

Please Enter the Choice :-
How to Run
Compile
g++ main.cpp -o mall
Execute
./mall

For Windows:

g++ main.cpp -o mall.exe
mall.exe
Future Enhancements
Product validation using predefined IDs.
File handling for storing purchase history.
Learning Outcomes

This project helps in understanding:

Object-Oriented Programming in C++
STL Containers
Constructor usage
Friend Classes
Inheritance Hierarchies
Menu-Driven Application Development
Cart and Billing System Logic
Author

Developed as a C++ Object-Oriented Programming project to demonstrate mall management and billing system functionality.
