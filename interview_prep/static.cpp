#include<iostream>
using namespace std;
/*
class pr{
    public:
        static int count;
        pr(){count++;}
};
int pr::count=0;
int main(){
    pr a;
    pr b;
    pr c;
    cout<<pr::count<<endl;
    return 0;
}
*/
class Count{
    public:
        static int count;
        static void counta(){
            cout<<count<<endl;
        }
};
int Count::count=0;
int main(){
    Count::count=10;
    Count::counta();
}

