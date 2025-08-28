#include <iostream>
using namespace std;

int main(){
    int n, input, lastDigit, reversed = 0, sum = 0;
    bool zero = false, isEven = true, isNegative = false;
    // get the n
    cout << "Enter the length of the array: ";
    cin >> n;
    int i = 1;
    
    while(i <= n){
        cout << "Enter the " << i << " / " << n << " number: ";
        cin >> input;
        if (isEven){
            if (input < 0){
                isNegative = true;
                input *= -1;
            }
            while(input > 0){
                lastDigit = input % 10;
                if (lastDigit != 0){
                    //cout << lastDigit;
                    input = input/10;
                    zero = false;
                    reversed += lastDigit;
                } else {
                    zero = true;
                    input = input/10;
                }
                reversed *= 10;
            }
            
            if (isNegative){
                reversed *= -1;
            }
            
            reversed /= 10;
            sum += reversed;
            reversed = 0;
            isEven = false;
        }
        sum += input;
        isEven = true;
        i++;
    }
    cout << "Sum: " << sum << endl;
    
    return 0;
}