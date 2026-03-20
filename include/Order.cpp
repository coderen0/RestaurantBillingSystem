#include "Order.hpp"
#include "Menu.hpp"

Order::Order()
{
    orderID = rand() % 1000; // Generate a random order ID
}

Order::~Order()
{
    
}

void Order::collectCustomerDetails()
{
    std::cout<<"Enter customer name: ";
    std::cin>>customerName;
    std::cout<<"Enter table number: ";
    std::cin>>tableNumber;
    std::cout<<"Enter payment method: ";
    std::cin>>paymentMethod;
}

void Order::getOrderDetails()
{
    std::string itemName;

    std::cout<<"Number of item: ";
    std::cin>>itemNo;
    int i = 0;
    while(i < itemNo)
    {
        std::cout<<"Enter item name: ";
        std::cin>>itemName;
        FoodItem item = Menu::getItemByName(itemName);
        items.push(item);
        std::cout<<"Enter quantity: ";
        std::cin>>quantity;
        i++;
    }
}