# Package-Delivery (In Development)

_Purpose_
-----------------------------------------------------------------------------------------------------------------
This program was created to package and store data of any class type ready for delivery! I have always wanted to push my skills as a programmer to create a unique program with the concept of using different class data types to be stored in one single inventory system that can be used to take in any data type. This is a great way to not only do that, but to also learn how to use threads to use multiple functions at the same time. This is all necessary skills for me to better understand the concept of using and developing my own custom collections and implementing intermediate thread concepts into my programming! 

I also worked many years as a Target Fulfilment Team member. A lot of my duties consisted of packaging and retrieving items from inventory! Packages can store all kinds of things so it would make sense that the data a package can hold shouldn't be relegated to a single type but should be able to hold different data types as well for shipping. This will also help me to improve my problem solving skills to incorporate real world equations and problems into the C++ programming language.

<img width="1756" height="417" alt="Package and Delivery graphic" src="https://github.com/user-attachments/assets/9e7d71a4-bae1-4377-bd0d-49f0b35065b8" />

-----------------------------------------------------------------------------------------------------------------

_Creating new Packages and Items_
-----------------------------------------------------------------------------------------------------------------
Packaging is used to store items, and there are many different types of items like cleaning supplies, groceries and snack, toys, electronics, etc. Therefore the package in this program should apply the same way allowing for the ```Package``` class to store different classes that inherit from the same base ```Item``` class data type

- First I created an Item class that is the base class to be inherited from other derived classes. The Item class will be the class data type the ```Package``` class will be storing within itself. With in the item class I create one method with the virtual keyword so that other derived classes can change the function to have their own unique behvior/output: 
  ```virtual void content() = 0;```
