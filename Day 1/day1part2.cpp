#include<fstream>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mniej(int a, int b){
    return a > b;
}

int main(){
    ifstream in;
    in.open("input.txt");
    string liczba;
    int sum=0;
    vector<int>v;
    while(getline(in, liczba)){
        if(liczba==""){
            v.push_back(sum);
            sum=0;
        }
        else{
            sum+= stoi(liczba);
        }
    }
    sort(v.begin(),v.end(), mniej);
    cout<<v[0]+v[1]+v[2];

}