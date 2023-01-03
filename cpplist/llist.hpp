
using namespace std;

#define MALE 0
#define FEMALE 1

Class linklist {
    private: 
        struct Person {
            string first_name;
            string last_name;
            int age;
            int gender; //male = 0, female = 1
            struct Person *nptr;
        };

        struct Person *head ; 

    public: 
        void add(struct Person *node);
        void remove(struct Person *node) ;
        void insert(struct Person *afternode, struct Person *node);
        void print();
        struct Person *find(string first_name, string last_name);
}