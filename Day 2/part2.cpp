#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream in;
    in.open("input.txt");
    char him,me;
    int points=0;
    while(in>>him){
        in>>me;
        if(me=='X'){
            if(him=='A'){
                points+=3;
            }
            else if(him=='B'){
                points++;
            }
            else{
                points+=2;
            }
        }
        else if(me=='Y'){
            points+=3;
            if(him=='A'){
                points++;
            }
            else if(him=='B'){
                points+=2;
            }
            else{
                points+=3;
            }
        }
        else{
            points+=6;
            if(him=='A'){
                points+=2;
            }
            else if(him=='B'){
                points+=3;
            }
            else{
                points++;
            }
        }
    }
    cout<<points;
    in.close();
}