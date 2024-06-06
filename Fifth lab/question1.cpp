// a file for a shopping list

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> shopping_list;
    string item;
    char more = 'y';

    while (more == 'y') {
        cout << "Enter an item: ";
        cin >> item;
        shopping_list.push_back(item);
        cout << "Do you want to add more items? (y/n): ";
        cin >> more;
    }

    sort(shopping_list.begin(), shopping_list.end());

    cout << "Your shopping list is:\n";
    for (int i = 0; i < shopping_list.size(); i++) {
        cout << shopping_list[i] << endl;
    }

    return 0;
}

// Output