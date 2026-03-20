#include<string>
#include<iostream>

class Order
{
    private:
        std::string customerName;
        int tableNumber;
        int quantity;
        int itemNo;
        std::string itemName;
        std::string paymentMethod;
        int orderID;
        
    public:
        Order();
        void getOrderDetails();
        void collectCustomerDetails();
        ~Order();
};