#include <iostream>
#include "main.h"

using namespace std;

int main() {


    cout << "enter a number: ";
    //int i;
    //cin >> i;
    //for(int x = 0; x <= i; x++) {
    while(first < 4000000 && second < 4000000){
        total = first + second;
        getSum();
        makeSecond();
        makeFirst();
        //cout << total << ", ";

    }

    if(isEven(total)){
        cout << "even" << endl;

    }else{
        cout << "odd" << endl;

    }
    cout << "total is: " << total << endl;
    cout << "even total is: " << evenTotal << endl;


    return 0;
}

void makeFirst() {

    first = total;

}


void makeSecond() {

    second = first;

}

bool isEven(long int x){

    if (x % 2 == 0)
        return true;
    else
        return false;


}

void getSum(){

    if(isEven(total) == true){
        //cout << total << ", ";
     evenTotal = evenTotal + total;
    }



}
