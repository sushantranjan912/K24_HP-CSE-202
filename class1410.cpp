// #include <iostream>
// using namespace std;

// int main() {
//     int m,n;
//     cin>>m>>n;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || i==n-1 || j==0 || j==n-1){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}