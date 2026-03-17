#include "include/list.h"

string name;   //grobal variables
vector<string> list;   //grobal vector

int main(int arg_count, char *args[]) {   //int means the return charactor type of main function,   arg_count is int, args is strings  args[0]=program name; args[0]=first argument supplied by the user

    if(arg_count>1){
        List test_Li;  //List is a type defined by class
        //string name(args[1]);  //create a string variable called "name" and copy the text stored in args[1] into it
        test_Li.name=string(args[1]);     //name=string(args[1]);   // transfer args[1] into string type and then value name
        test_Li.print_menu();

    }
    else{
        cout<<"usename not supplied.. existing the program"<< endl;
    }
    std::cout<< "Hello world"<< std:: endl;//std:: endl means creat a new line
    return 0; // a zero exit status means everything was successful    related to int main,  return code=0


}
