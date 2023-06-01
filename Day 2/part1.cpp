#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in;
    in.open("input.txt");
    char him,me;
    int points=0;
    while(in>>him){
        in>>me;
        if(me=='X'){
            points++;
            if(him=='A'){
                points+=3;
            }
            else if(him=='B'){
                
            }
            else{
                points+=6;
            }
        }
        else if(me=='Y'){
            points+=2;
            if(him=='A'){
                points+=6;
            }
            else if(him=='B'){
                points+=3;
            }
            else{
                
            }
        }
        else{
            points+=3;
            if(him=='A'){

            }
            else if(him=='B'){
                points+=6;
            }
            else{
                points+=3;
            }
        }
    }
    cout<<points;
    in.close();
}