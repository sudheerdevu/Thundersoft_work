#include<iostream.h>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);

    try
    {
        cout<<v.at(0)<<endl;
    }
    catch
    {
        
    }
}