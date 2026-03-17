#include<iostream>   //write or read in console & terminal
#include<vector>
using namespace std;   //std corresponds: allow to avoid std:: in the STL isostram, like std::cout==cout

class List{
    private:
    protected:
    public:

        List() {
            //constructor
        }

        ~List(){
            //destructor
        }
        string name;   //grobal variables
        vector<string> list;   //grobal vector
        void print_menu(); //void means nothing,
        void print_list();
        void delete_item();
        void add_item();

};