#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    //providing seed value
    srand((unsigned) time(NULL));

    //get random number
    int random = rand();

    //print the random number
    cout<<random<<endl;

    return 1;
}