#include <bits/stdc++.h> 
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10); 
    v.push_back(20);
    v.push_back(30);

    v.emplace_back(40);

    vector<pair<int,int>>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100); // 5size 0-4 elements are 100 {100,100,100,100,100}
    vector<int> v1(5);
    vector<int> v2(v1);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;











    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();
    // reverse iterator 

    cout<<v[0]<<" "<<v.at(o);

    cout<<v.back()<<" ";
    


    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*(it) <<" ";
    }

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it) <<" ";
    }

    for(auto it:v){
        cout<<it<<" ";

    }





    //erase in vector - deletion
    //{10,20,30,40}
    v.erase(v.begin()+1)

    //{10,20,30,40,50
    
    //insert


    




}

