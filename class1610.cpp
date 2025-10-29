// #include <iostream>
// using namespace std;
// int add(int x,int y);

// int main() {
//     cout<<add(2,3)<<endl;
    
//     return 0;
// }
// int add(int x,int y){
//     return x+y;
// }

#include <iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int main() {
    cout<<fact(5)<<endl;
    
    return 0;
}