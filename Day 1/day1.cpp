#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream in;
    in.open("input.txt");
    string liczba;
    int sum=0,maxsum=0;
    while(getline(in, liczba)){
        if(liczba==""){
            sum=0;
        }
        else{
            sum+= stoi(liczba);
        }

        if(sum>maxsum){
            maxsum=sum;
        }

    }
    cout<<maxsum;
    
}