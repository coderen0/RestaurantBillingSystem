#include<string>
class FoodItem
{
    private:
        std::string itemName;
        double itemPrice;

    public:
        FoodItem();
        FoodItem(const std::string& name, double price);
        std::string getItemName() const;
        double getItemPrice() const;
};
