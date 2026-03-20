#include "Menu.hpp"
#include "src/main.cpp"

void Menu::showMainMenu()
{
    Order order;
    int choice = 0;
    std::cout<<"Welcome to the Restaurant Billing System!"<<std::endl;
    std::cout<<"Please select an option:"<<std::endl;
    while(choice != 3)
    {
        std::cout<<"1. Create a new order"<<std::endl;
        std::cout<<"2. View food menu"<<std::endl;
        std::cout<<"3. Exit"<<std::endl;
        std::cin>>choice;

        switch(choice)
        {
            case 1:
                order.collectCustomerDetails();
                order.getOrderDetails();
                break;
            case 2:
                // Code to food menu
                break;
            case 3:
                std::cout<<"Thank you for using the Restaurant Billing System!"<<std::endl;
                break;
            default:
                std::cout<<"Invalid choice. Please try again."<<std::endl;
        }
    }
}

FoodItem Menu::getItemByName(const std::string& itemName)
{
    for(const auto& item : itemList)
    {
        if(item.getItemName() == itemName) return item;
    }
}