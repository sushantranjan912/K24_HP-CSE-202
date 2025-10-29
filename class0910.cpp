// #include <iostream>
// using namespace std;

// int main() {
//     // cin>x;
//     int x=5;
//     float y=(float)x/2;
//     cout<<y<<endl;
//     cout<<x<<endl;
//     char ch[50];
//     cin>>ch;


    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int x=5;
// void inc(){
//     x++;
// }

// int main() {
//     inc();
//     inc();
//     inc();
//     cout<<x<<endl;
    
//     return 0;
// }

#include <iostream>
using namespace std;
void inc(int &x){
    x++;
}

int main() {
    static int x=5;
    inc(x);
    inc(x);
    inc(x);
    cout<<x<<endl;
    // auto m=5;
    // volatile int n=8;
    // cout<<m<<endl;
    // cout<<n<<endl;
    
    return 0;
}