/*
CH-230-A
a10 p7.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include <cstring>  

using namespace std;



class NaiveString {
private: // data members are private
    char *str;
public:
    //constroctors
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    //deconstroctor
    ~NaiveString(){
    cout<<"freeing strings...\n";
      delete [] str;
    }
    void update(char, char);
    void print();
    
};

NaiveString::NaiveString(const char* t) {
    str = new char[strlen(t) + 1];
    strcpy(str, t);
    cout<<"Constructing NaiveString from const char*"<<endl;
}

NaiveString::NaiveString(const NaiveString& src) {
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    cout<<"Copy constructor being called"<<endl;
 
}

void NaiveString::update(char oldchar, char newchar) {
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print() {
    cout << str << endl;
}



void funcByVal(NaiveString s) {
    s.update('B', 'C');
    cout<<"funcByVal being called\n";
    s.print();

}

void funcByRef(NaiveString& s){
  cout<<"funcByRef being called\n";
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv)
{
    NaiveString a("acBdBA");
    NaiveString b(a);
    a.print();
    cout << "calling funcbyval()" << endl;
    funcByVal(a);
    a.print();
    cout<< "calling funcbyref()" <<endl;
    funcByRef(b);
    b.print();
    return 0;
    }
