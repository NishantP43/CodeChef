#include<iostream>
#include <cmath>

using namespace std ;

int Calc_total_cost(int N, int X){
    int subscriptions = (N + 5 ) / 6;
    int total_cost = subscriptions * X ;
    return total_cost;
    
}

int main(){
    int T;
    cin >> T ;
    
    for (int i = 0 ; i < T; ++i){
        int N, X;
        cin >> N >> X ;
        cout << Calc_total_cost(N,X) << endl ;
        
    }
    return 0 ; 
}