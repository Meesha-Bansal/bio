// C++ program to show how to use string::compare()
// to compare the two strings
#include <bits/stdc++.h>
using namespace std;

int main() {
    string num("52");
    string str2("Geeks");

    // cout<<(str1.compare(str2));
    // // Comparing str1 and str2
    // if ((str1.compare(str2)) == 0)
    //     cout << "String Matched" << endl;
    // else
    //     cout << "String Not Matched" << endl;

        int temp = stoi(num); 
        if(temp%2 == 1){
            cout<<num<<endl;
        }
        string ans = "";
        while(temp>0){
            temp = temp/10;
            if(temp%2==1){
                ans+= to_string(temp);
                break;
            }
        }
        cout<<ans<<endl;
    return 0;
}