#include "include/list.h"


void List::print_menu()  {
    int choice;
    cout<<"******************\n";    // \n == endl == creat a new line
    cout<<"1 . print list    \n";
    cout<<"2 . add to list    \n";
    cout<<"3 . delete from list   \n";
    cout<<"4 . Quit   \n";
    cout<<"Enter your choice and press reture/enter  \n";
    cin >> choice;

    if(choice==4){
        exit(0);
    }
    else if(choice==3){
        delete_item();
    }
    else if(choice==2){
        add_item();
    }
    else if(choice==1){
        print_list();
    }
    else{     //else if{}
        cout<<"wrong choice \n";
    }

}

void List::add_item(){
    cout <<"\n\n\n\n\n\n\n";
    cout <<"**************\n";
    cout <<"**Add Item**\n";
    cout <<"type in an item and press enter: \n";

    string item;
    cin >> item;

    list.push_back(item);
    cout <<"Successfully added an item to the list \n\n";
    cin.clear();

    print_menu();
}

void List::delete_item(){

    cout <<"\n\n\n\n\n\n\n";
    cout <<"**************\n";
    cout <<"**delete Item**\n";
    cout <<"Select an item index number to delete and press enter: \n";

    if(list.size()){
        for(int i=0;i< int(list.size()); i++){    // or for(unsigned int i=0;i< list.size(); i++){
            cout << i <<  ":" << list[i]<< "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    }
    else{
        cout <<"No items in the list or to delete.\n";
    }


    print_menu();
}

void List::print_list(){
    char choice;
    
    cout <<"\n\n\n\n\n\n\n";
    cout <<"**print list**\n";

    for(int list_index=0; list_index < int (list.size()); list_index++) {
        cout << " * "<< list[list_index] << "\n";
    }

    cout<< "M-Menu \n";

    
    cin >> choice;

    if(choice == 'M' || choice == 'm'){   //  ||="or" ; && ="and"
        print_menu();
    }
    else {
        cout << "Invaid Choice. Quitting..\n";
    }
}
