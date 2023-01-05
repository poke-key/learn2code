#include "cnode.hpp"


// Constructor with parameters
cnode::cnode(string fname, string lname, int p_age, int p_gender)
{
    first_name  = fname ;   
    last_name = lname;
    age = p_age;
    gender = p_gender;
} 
cnode::~cnode() {
    
};

void cnode::setName(string fname) {
    first_name = fname;
};
void cnode::setLast(string lname) {
    last_name = lname;
};
void cnode::setAge(int p_age) {
    age = p_age;
};
void cnode::setGender(int p_gender) {
    gender = p_gender;
};