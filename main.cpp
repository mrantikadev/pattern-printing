#include <iostream>
using namespace std;

void kutu(int boyut);
void ok(int n);
void elmas(int n);

int main() {
	int boyut;
	while(boyut<=1) {
		cout<<"Cizilecek sekiller icin boyut giriniz: ";
		cin>>boyut;
	}
	kutu(boyut);
	cout<<endl;
	ok(boyut);
	cout<<endl;
	elmas(boyut);
	return 0;
}
void kutu(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1||j==1||i==n||j==n) {
                cout<<" *";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void ok(int n) {
    int i,j;
    for(int i=1; i<=n; i++) {
        for(int j=i; j<n; j++) {
            cout<<" ";
        }
        for(int j=1; j<i; j++) {
            cout<<"*";
        }
        for(int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1; i<=2*n; i++) {
        for(j=1; j<n; j++) {
            cout<<" ";
        }
        cout<<"*\n";
    }
}
void elmas(int n) {
    for(int i=1; i<n; i++) {
        for(int j=i; j<n; j++) {
            cout<<" ";
        }
        for(int j=1; j<i; j++) {
            if(j==1) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1; j<=i; j++) { 
            if(j==i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<i; j++) {
            cout<<" ";
        }
        for(int j=i; j<n; j++) {
            if(j==i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=i; j<=n; j++) {
            if(j==n) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}