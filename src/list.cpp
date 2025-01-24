#include "include/list.h"

void List::print_menu()
{
    int choice;

    cout << "***************************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to List.\n",
    cout << " 3 - Delete to List.\n";
    cout << " 4 - Quit Program.\n";
    cout << " Enter your choice and press return/enter\n";

    cin >> choice;

    if (choice == 4)
    {
        exit(0);
    }
    else if (choice == 3)
    {
        delete_item();
    }
    else if (choice == 2)
    {
        add_item();
    }
    else if (choice == 1)
    {
        print_list();
    }
    else
    {
        cout << "Sorry choice hasn't been implemented.\n";
    }
}

void List::add_item()
{

    cout << "]\n\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an Item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Added Item\n\n\n";
    cin.clear();

    print_menu();
}

void List::delete_item()
{

    cout << "*** Delter Item ***\n";
    cout << "Select an item index number to delete: \n";

    if (list.size())
    {
        for (unsigned int i = 0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    }
    else
    {
        cout << "No items in the list\n";
    }

    print_menu();
}

void List::print_list()
{

    cout << "\n\n\n\n";
    cout << " Printing list\n";

    for (unsigned int list_index = 0; list_index < list.size(); list_index++)
    {

        cout << " * " << list[list_index] << "\n";
    }

    cout << "M = Menu. Please select using character. \n";
    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm')
    {
        print_menu();
    }
    else
    {
        cout << "Invalid Choice. Qutting.\n";
    }
}