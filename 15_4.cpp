#include<iostream> 
using namespace std;

void print_rev(int i) {
    if (i > 0) {  
        cout << (i % 10);  
        print_rev(i / 10);  
    }
}

int main() {
    int i;
    cout << "Enter the number: ";
    cin >> i; 
    print_rev(i);  
    cout << endl;  
    return 0; 
}