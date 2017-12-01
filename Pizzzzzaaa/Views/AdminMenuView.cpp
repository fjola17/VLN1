#include "AdminMenuView.h"

void AdminMenuView::displayFavPizza(Pizza p)
{
    cout << "Hello Admin" << endl;
    cout << "Your Favorite Pizza" << endl;
    cout << "\t Is" << endl;
    cout << p.name  << endl;
    cout << "Price:" << endl;
    cout << p.price<< endl;
}
