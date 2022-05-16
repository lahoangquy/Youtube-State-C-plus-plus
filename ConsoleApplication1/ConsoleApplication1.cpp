#include <iostream>
#include <string> // We can use all the important functions in the string library

// Each object has a state that may be different from the state of the other objects. 
// We already introduced the Product struct which represents an abstraction of a physical product.
// All members of a product object represent the state of the object. 
// An example of that is available which is a boolean value and it will be true if products are in stock.
// The values of the member variables define the state of the object.
// If you assign the new value to the new object the state will change.
struct Product {
	std::string name; // The name variable will belong to string type
	double price;
	int rating;
	bool available; // available will only be yes or no so that is the reason why we use boolean value
};

int main()
{
	Product book;
	Product Tshirt;
	Product labtop;
	Product* ptr = &book;
	Product& ref = Tshirt;
	book.name = " King of games"; // we did assign the property name in the product object.
	book.price = 10.99;
	std::cout << ptr->name << std::endl;
	std::cout << ptr->price<< std::endl;
	Product new_book;// we will declare a new object
	new_book.available = true;
	new_book.rating = 5;
	std::cout << new_book.available << std::endl;
	std::cout << new_book.rating << std::endl;

}

