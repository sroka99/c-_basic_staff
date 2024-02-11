#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struktura reprezentująca element na liście zakupów
struct ShoppingItem {
    string name;
    int quantity;

    // Konstruktor
    ShoppingItem(string itemName, int itemQuantity) : name(itemName), quantity(itemQuantity) {}
};

// Funkcja pomocnicza do wyświetlania listy zakupów
void displayShoppingList(const vector<ShoppingItem>& shoppingList) {
    cout << "Lista zakupów:" << endl;
    for (const auto& item : shoppingList) {
        cout << "- " << item.name << ": " << item.quantity << endl;
    }
}

int main() {
    vector<ShoppingItem> shoppingList;

    // Dodawanie elementów do listy zakupów
    shoppingList.push_back(ShoppingItem("Chleb", 2));
    shoppingList.push_back(ShoppingItem("Mleko", 1));
    shoppingList.push_back(ShoppingItem("Jajka", 12));
    shoppingList.push_back(ShoppingItem("Owoce", 3));

    // Wyświetlanie początkowej listy zakupów
    displayShoppingList(shoppingList);

    // Dodawanie nowego elementu do listy zakupów
    string newItemName;
    int newItemQuantity;

    cout << "\nDodaj nowy produkt do listy zakupów:" << endl;
    cout << "Nazwa: ";
    getline(cin, newItemName);  // Umożliwia wprowadzenie nazwy z białymi znakami
    cout << "Ilość: ";
    cin >> newItemQuantity;

    cin.ignore();  // Usuwa znak nowej linii z bufora wejściowego

    shoppingList.push_back(ShoppingItem(newItemName, newItemQuantity));

    // Wyświetlanie zaktualizowanej listy zakupów
    displayShoppingList(shoppingList);

    // Sortowanie listy zakupów alfabetycznie
    sort(shoppingList.begin(), shoppingList.end(), [](const ShoppingItem& a, const ShoppingItem& b) {
        return a.name < b.name;
    });

    // Wyświetlanie posortowanej listy zakupów
    cout << "\nPosortowana lista zakupów:" << endl;
    displayShoppingList(shoppingList);

    return 0;
}
