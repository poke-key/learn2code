#include <iostream>
using namespace std;

class cnode {

    cnode(string fname, string lname, int p_age, int p_gender);  // Constructor with parameters
    ~cnode();

    private: 
        string first_name;   
        string last_name;
        int age;
        int gender;
        cnode* nptr;

    public:
        void setName(string name);
        void setLast(string name);
        void setAge(int age);
        void setGender(int gender);


};