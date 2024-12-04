#include <iostream>
using namespace std;

int main() {
    float a = 20, b = 30;
    float c = 4, output;
    
    cin >> a >> b >> c;  
    
    output = a - b / c;   
    cout << "output: " << output << "\n";  
    
    return 0;
}
