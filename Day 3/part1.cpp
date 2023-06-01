#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int converttonum(char znak){
    if(int(znak)<91){
        return int(znak) -38;
    }
    else{
        return int(znak) -96;
    }
}

int main(){
    ifstream in;
    in.open("input.txt");
    string s;
    bool tab[55];
    int wyn=0;
    while(in>>s){
        for(int i=1;i<55;i++){
            tab[i]=0;
        }
        for(int i=0;i<s.size()/2;i++){
            tab[converttonum(s[i])]=1;
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(tab[converttonum(s[i])]){
                wyn+=converttonum(s[i]);
                break;
            }
        }
    }

    cout<<wyn;
    in.close();
}