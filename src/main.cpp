#include "include/list.h"


int main(int arg_count, char *args[])
{   
    List simplelist;


    if (arg_count > 1)
    {
        simplelist.name = string(args[1]);
        simplelist.mainList = simplelist.data.read();
        simplelist.find_userList();
        simplelist.print_menu();
    }
    else
    {
        cout << "Username not supplied. exiting program." << endl;
    }

    return 0;
}