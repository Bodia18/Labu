#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

void EnterAnswer(int x1,double x2,int x3,double Sa,double Sb,double Sc){
    cout << "S" << "(" << x1 << ")" << left << setw(8) <<"  = " << right << setw(5) << Sa << endl;
    cout << "S" << "(" << x2 << ")" << left << setw(8) <<"  = " << right << setw(5) << Sb << endl;
    cout << "S" << "(" << x3 << ")" << left << setw(8) <<"  = " << right << setw(5) << Sc << endl;
}

int main() {
    int x1,x3;
    double x2,S1a = 0,S1b = 0,S1c = 0,Sa,Sb,Sc;
    bool TrueAnsver = true;
 
    cout << "x = ";
    cin >> x1; 
    if(!cin) {
       cout << "ne verno vveli, povtorite vvod"<<endl;
       cin.clear();
       while (cin.get() != '\n');
       TrueAnsver = false;
    }
      
    cout << "x = ";
    cin >> x2;  
    if(!cin) {
       cout << "ne verno vveli, povtorite vvod"<<endl;
       cin.clear();
       while (cin.get() != '\n');
       TrueAnsver = false;
    }
     
    cout << "x = ";
    cin >> x3;
    if(!cin) {
       cout << "ne verno vveli, povtorite vvod"<<endl;
       cin.clear();
       while (cin.get() != '\n');
       TrueAnsver = false;
    }
    if(TrueAnsver){
        for(int n = 1; n <= 10; n++){
            S1a = S1a + (1/n);
            Sa = S1a * pow(x1,n);
        } 
        for(int n = 1; n <= 10; n++){
            S1b = S1b + (1/n);
            Sb = S1b * pow(x2,n);
        }
        for(int n = 1; n <= 10; n++){
            S1c = S1c + (1/n); 
            Sc = S1c * pow(x3,n);
        }
        EnterAnswer(x1,x2,x3,Sa,Sb,Sc);
    }
    else{
        exit(0);
    }
}