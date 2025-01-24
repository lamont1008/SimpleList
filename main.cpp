#include "include/list.h"

int main(int arg_count, char *args[])
{   

    if (arg_count > 1)
    {
        List simplelist;
        simplelist.name = string(args[1]);
        simplelist.print_menu();
    }
    else
    {
        cout << "Username not supplied. exiting program." << endl;
    }

    return 0;
}

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
        print_menu(name);
    }
    else
    {
        cout << "Invalid Choice. Qutting.\n";
    }
}