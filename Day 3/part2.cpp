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
    string s1,s2,s3;
    bool tab1[55],tab2[55],tab3[55];
    int wyn=0;
    while(in>>s1>>s2>>s3){
        for(int i=1;i<55;i++){
            tab1[i]=0;
            tab2[i]=0;
            tab3[i]=0;
        }
        for(int i=0;i<s1.size();i++){
            tab1[converttonum(s1[i])]=1;
        }
        for(int i=0;i<s2.size();i++){
            tab2[converttonum(s2[i])]=1;
        }
        for(int i=0;i<s3.size();i++){
            tab3[converttonum(s3[i])]=1;
        }

        for(int i=1;i<55;i++){
            if(tab1[i]&&tab2[i]&&tab3[i]){
                wyn+=i;
                break;
            }
        }

    }

    cout<<wyn;
    in.close();
}