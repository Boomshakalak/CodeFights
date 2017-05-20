#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    int a =3;
    int count = 0;
    while (a){
        if (a & 1)count++;
        a =a >>1;
    }
    cout<<count<<endl;
    /*code*/
    return 0;
}
