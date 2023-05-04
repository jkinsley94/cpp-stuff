#include<iostream>
#include<cstdlib>
#include<list>
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
int main(){
    list<int> nums {1, 2, 3, 4};

    cout << "List elements: ";
    for(int number : nums){
        cout << number <<", ";
    }
    return 0;
}