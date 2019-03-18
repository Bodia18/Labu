#include <iostream>

using namespace std;

int main(){
    int n,max,min;
    bool TrueAnsver = true;
    cout << "Vedit rozmir" <<endl;
    cin >> n;
    if(!cin) {
       cout << "ne verno vveli, povtorite vvod"<<endl;
       cin.clear();
       while (cin.get() != '\n');
       TrueAnsver = false;
    }
    int **Arr = new int* [n];
    for(int i = 0; i < n; i++){
        Arr[i] = new int[n];
    }
    if(TrueAnsver){
        cout << "Vedit matrix" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> Arr[i][j];
                if(!cin) {
                    cout << "ne verno vveli, povtorite vvod"<<endl;
                    cin.clear();
                    while (cin.get() != '\n');
                    TrueAnsver = false;
                }
            }
        }
        if(TrueAnsver){
            min = Arr[0][0];
            max = Arr[0][0];
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        if(Arr[i][j] > max){
                            max = Arr[i][j];
                        }
                        else if(min > Arr[i][j]){
                            min = Arr[i][j];
                        }
                    }
                }
            cout << "Max : " << max <<endl;
            cout << "Min : " <<min <<endl;
        }
        else {
            exit(0);
        }
    }
    else {
        exit(0);
    }
}