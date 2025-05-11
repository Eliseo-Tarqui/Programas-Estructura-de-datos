// programa 6

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int num[100];
    int i = 0;
    int primos = 0;

    for(i = 0; i < 100; i++){
        num[i] = rand() % 500 + 1;
    }

    for(i = 0; i < 100; i++){
        if(num[i] % 2 == 0){
            primos++;
        }
    }

    cout<<"Los numeros primos son: "<<primos<<endl;

    system("pause");
    return 0;
}
