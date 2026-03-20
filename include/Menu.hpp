#include<iostream>
#include "FoodItem.hpp"
#include<vector>

class Menu
{
    private:
        std::vector<FoodItem> itemList;
    public:

        static void showMainMenu();
        FoodItem getItemByName(const std::string& itemName);
        
};

