#include "FoodItem.hpp"

FoodItem::FoodItem()
{
    itemName = "";
    itemPrice = 0.0;
}

FoodItem::FoodItem(const std::string& name, double price)
{
    itemName = name;
    itemPrice = price;
}

std::string FoodItem::getItemName() const
{
    return itemName;
}

double FoodItem::getItemPrice() const
{
    return itemPrice;
}