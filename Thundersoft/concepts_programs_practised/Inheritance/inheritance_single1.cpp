#include <iostream>
#include <string>
using namespace std;

class sudheer {
private:
    string name;
    int id;

public:
    // Getter methods for accessing private members
    string getname() {
        return name;
    }

    int getid() {
        return id;
    }

    // Friend function to set `name` and `id`
    friend void setdetails(sudheer &s, const string &n, int i);
};

void setdetails(sudheer &s, const string &n, int i) {
    s.name = n;
    s.id = i;
}

class vivek : public sudheer {
private:
    string department;
    int teamsize;

public:
    // Friend function to set `department` and `teamsize`
    friend void setmanagerdetails(vivek &v, const string &d, int t);

    void display() {
        // Display all members with improved readability
        cout << "Name: " << getname()
             << ", ID: " << getid()
             << ", Department: " << department
             << ", Team Size: " << teamsize << endl;
    }
};

void setmanagerdetails(vivek &v, const string &d, int t) {
    v.department = d;
    v.teamsize = t;
}

int main() {
    vivek v;
    setdetails(v, "vivek", 420);          // Set details for the inherited `sudheer` part
    setmanagerdetails(v, "CSE", 2);       // Set manager details specific to `vivek`
    v.display();                          // Display the information
    return 0;
}