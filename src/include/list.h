#include "database.h"

using namespace std;

class List
{
    private:   // only the class itself
    protected: // inherits or belongs to class
    public:    // anything including the class

        List() { //Constructor

        }
        ~List() { //Destructor

        }

        Database data;
        vector<vector<string>> mainList;
        vector<string> list;
        string name;
        unsigned int currentUserIndex;

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
        bool find_userList();
        void save_list();
};