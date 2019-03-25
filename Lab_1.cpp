#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    float xmax,xmin;
    float max,min;
	float a, b, c;
	cout << "From:";
	cin >> a;
	cout << "To:";
	cin >> b;
	cout << "N:";
	cin >> c;
	cout <<endl;
	 
	if (c < 2){
	        cout << "Veedit nove chuclo";
	}
	
	else{

	if (a > b) {
		for (int i = 0; i <= 1; i++) {
			cout << "Veedit nove chuclo";
		}
	}
	else{


	float h;
	float x, f;
	h = (b - a) / (c - 1);
	x = a + (1*h);
	max = x * x / (1 + abs(sin(x)));
	min = x * x / (1 + abs(sin(x))); 
	
	xmax = x;
	xmin = x;

	for (int i = 0; i <= c-1; i++) {
		x = a + (i*h);
		f = x * x / (1 + abs(sin(x)));
		cout << "i = " << i+1 << " : " << "f(x) = " << f <<":  X = "<< x <<endl;
		if(f > max){
		    max = f;
		    xmax = x;
		}
		if(f < min){
		    min = f;
		    xmin = x;
		}
	}
	xmax = b;
	cout <<endl;
	cout <<"Min:"<<min<<endl;
	cout <<"Max:"<<max;
	cout <<endl<<endl;
	cout <<"Max_x: "<<xmax<<endl;
	cout << "Min_x: "<<xmin;

	system("pause");

	}
	}
}