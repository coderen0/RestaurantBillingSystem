#include<string>
#include<iostream>
#include <vector>

#include "FoodItem.hpp"

class Order
{
    protected:
        std::string customerName;
        int tableNumber;
        int quantity;
        int itemNo;
        std::vector<FoodItem> items;
        std::string paymentMethod;
        int orderID;
        
    public:
        Order();
        void getOrderDetails();
        void collectCustomerDetails();
        ~Order();
};