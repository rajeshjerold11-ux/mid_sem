#include <iostream>
#include <iomanip>
using namespace std;

class Product
{
public:
    string id, name;
    float price;
    int qty;
};
int main()
{
    Product p[40];
    int n = 0, choice;
    float revenue = 0;

    do
    {
        cout << "\n===== Inventory Tracker =====\n";
        cout << "1. Add\n2. Restock\n3. Sell\n";
        cout << "4. Low Stock\n5. Revenue\n6. Display All\n7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "ID: "; cin >> p[n].id;
            cout << "Name: "; cin >> p[n].name;
            cout << "Price: "; cin >> p[n].price;
            cout << "Quantity: "; cin >> p[n].qty;

            n++;
            cout << "Product added.\n";
            break;

        case 2:
        {
            string id;
            int q;

            cout << "Product ID: ";
            cin >> id;
            for(int i = 0; i < n; i++)
            {
                if(p[i].id == id)
                {
                    cout << "Quantity to add: ";
                    cin >> q;
                    p[i].qty += q;
                    cout << "Product restocked.\n";
                    break;
                }
            }
            break;
        }
        case 3:
        {
            string id;
            int q;

            cout << "Product ID: ";
            cin >> id;
            for(int i = 0; i < n; i++)
            {
                if(p[i].id == id)
                {
                    cout << "Quantity to sell: ";
                    cin >> q;

                    if(q > p[i].qty)
                        cout << "Not enough stock.\n";
                    else
                    {
                        p[i].qty -= q;
                        revenue += p[i].price * q;

                        cout << "Sold.\n";
                        cout << "Revenue from this sale: "
                             << fixed << setprecision(2)
                             << p[i].price * q << endl;
                    }
                    break;
                }
            }
            break;
        }

        case 4:
        {
            bool found = false;

            for(int i = 0; i < n; i++)
            {
                if(p[i].qty < 5)
                {
                    cout << p[i].id << " "
                         << p[i].name << " "
                         << p[i].price << " "
                         << p[i].qty << endl;
                    found = true;
                }
            }
            if(!found)
                cout << "No low-stock products\n";

            break;
        }
        case 5:
            cout << "Total Revenue: "
                 << fixed << setprecision(2)
                 << revenue << endl;
            break;

        case 6:
            for(int i = 0; i < n; i++)
                cout << p[i].id << " "
                     << p[i].name << " "
                     << p[i].price << " "
                     << p[i].qty << endl;
            break;

        case 7:
            cout << "Exiting...\n";
            break;
        }

    } while(choice != 7);

    return 0;
}

