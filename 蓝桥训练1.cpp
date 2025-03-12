#include <iostream>  
#include <vector>  
#include <set>  
#include <string>  

using namespace std;  

bool isValidDate(int month, int day) {  
    if (month < 1 || month > 12) return false;  
    if (day < 1) return false;  
    switch (month) {  
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:  
            return day <= 31;  
        case 4: case 6: case 9: case 11:  
            return day <= 30;  
        case 2:  
            return day <= 28;  
        default:  
            return false;  
    }  
}  

int main() {  
    vector<int> arr(100);  
    

    set<string> validDates;  

    for (int i = 0; i < 100; ++i) {  
        for (int j = i + 1; j < 100; ++j) {  
            for (int k = j + 1; k < 100; ++k) {  
                for (int l = k + 1; l < 100; ++l) {  
                    for (int m = l + 1; m < 100; ++m) {  
                        for (int n = m + 1; n < 100; ++n) {  
                            for (int o = n + 1; o < 100; ++o) {  
                                for (int p = o + 1; p < 100; ++p) {  
                                    
                                    string date = to_string(arr[i]) + to_string(arr[j]) +   
                                                   to_string(arr[k]) + to_string(arr[l]) +   
                                                   to_string(arr[m]) + to_string(arr[n]) +   
                                                   to_string(arr[o]) + to_string(arr[p]);  
                                    
                                    int year = 2023;   
                                    int month = stoi(date.substr(4, 2));   
                                    int day = stoi(date.substr(6, 2));   

                                     
                                    if (isValidDate(month, day)) {  
                                        validDates.insert(date);  
                                    }  
                                }  
                            }  
                        }  
                    }  
                }  
            }  
        }  
    }  

    cout << validDates.size() << endl; 
    return 0;  
}  
