#include <cstdlib>
#include <iostream>

using namespace std;

float fx(int a,int c){
    float hasil = (2*a)/c;
    return hasil;
}

int main(){
    int a,c;
    float hasil;
    a = 6;
    c = 8;
    hasil= fx(a,c);
    cout <<"Hasilnya ="<<hasil<<endl;
    system("PAUSE");
    return 0;
}
