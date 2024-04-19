#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

class MenuItem {
private:
    string name;
    string description;
    double price;

public:
    MenuItem(string name, string description, double price) {
        this->name = name;
        this->description = description;
        this->price = price;
    }

    string getName() {
        return name;
    }

    string getDescription() {
        return description;
    }

    double getPrice() {
        return price;
    }
};
class Menu {
private:
    vector<MenuItem> items;
    string drink, food, desert;
    string name;
    string raspuns, r2;

public:
    void addItem(MenuItem item) {
        items.push_back(item);
    }
    void getIntroduction() {
        cout << "<3 <3 !Welcome to our restaurant! <3 <3" << endl
            << "Would you like to see the menu?" << endl;
        cin >> raspuns;
        if (raspuns == "YES" || raspuns == "Yes" || raspuns == "yes") {
            for (auto i : items) {
                cout << i.getName() << " " << i.getDescription() << " " << i.getPrice()<<" lei" << endl;
            }
        }
        else {
            cout << "Ok. Call me if you need something.";
            exit(0);
        }
        cout << "Would you like to order drinks?" << endl;
        cin >> name;
        if (name == "YES" || name == "Yes" || name == "yes") {
            cout << "What drink would you like?" << endl;
            cin >> drink;
        }
        else {
            cout << "Ok." << endl;
        }

        cout << "And what do you want to eat?" << endl;
        cin >> food;

        cout << "And will you take a dessert at the end?" << endl;
        cin >> r2;
        if (r2 == "Yes" || r2 == "YES" || r2 == "yes") {
            cout << "Ok. You can tell me what you want to order." << endl;
            cin >> desert;
            cout << "Good choices! I will come with the food and dessert in a moment!" << endl;
        }
        else {
            cout << "Ok. I will come with the food in a moment!" << endl;
        }
    }
};

int main() {
    MenuItem item1("Coca-Cola", "330ml", 9);
    MenuItem item2("Fanta", "330ml", 9);
    MenuItem item3("Sprite", "330ml", 9);
    MenuItem item4("Water", "500ml", 7);
    MenuItem item5("Tuborg", "330ml", 11);
    MenuItem item6("Perroni", "330ml", 13);
    MenuItem item7("Ursus", "330ml", 12);
    MenuItem item8("Carlsberg", "330ml", 11);
    MenuItem item9("Tuborg Draft", "600ml", 14);;
    MenuItem item10("Quattro Stagioni Pasta", "400g", 35);
    MenuItem item11("Milanese Pasta", "400g", 34);
    MenuItem item12("Margherita Pizza", "450g", 29);
    MenuItem item13("Prosciutto Pizza", "450g", 31);
    MenuItem item14("Quattro Stagioni Pizza", "450g", 32);
    MenuItem item15("Pollo Pizza", "450g", 34);
    MenuItem item16("Greek Salad", "400g", 32);
    MenuItem item17("Chili-Rubbed Flank Steak Salad", "400g", 34);
    MenuItem item18("Caesar Salad with Crispy Artichokes", "400g", 31);
    MenuItem item19("White chocolate cheesecake", "200g", 21);
    MenuItem item20("Banana cake", "200g", 23);
    MenuItem item21("Lava cake", "200g", 26);
    MenuItem item22("Pancakes with Nutella", "200g", 24);
    MenuItem item23("Pancakes with Pistacchio", "200g", 24);
    MenuItem item24("Protein Pancakes", "200g", 24);

    Menu menu;
    menu.addItem(item1);
    menu.addItem(item2);
    menu.addItem(item3);
    menu.addItem(item4);
    menu.addItem(item5);
    menu.addItem(item6);
    menu.addItem(item7);
    menu.addItem(item8);
    menu.addItem(item9);
    menu.addItem(item10);
    menu.addItem(item11);
    menu.addItem(item12);
    menu.addItem(item13);
    menu.addItem(item14);
    menu.addItem(item15);
    menu.addItem(item16);
    menu.addItem(item17);
    menu.addItem(item18);
    menu.addItem(item19);
    menu.addItem(item20);
    menu.addItem(item21);
    menu.addItem(item22);
    menu.addItem(item23);
    menu.addItem(item24);
    menu.getIntroduction();

}
