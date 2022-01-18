#include <iostream>
#include "include/EquationSystem.hpp"

using namespace std;

int main(){
    string eq1, eq2;
    double x,y;
    cout<<"Escribe la primera equación(x): ";
    cin>>eq1;
    cout<<"Escribe la segunda equación(y): ";
    cin>>eq2;
    equationSystem *eqS=new equationSystem;
    eqS->introduceEquations(eq1, eq2);
    eqS->solve(&x, &y); 
    cout<<x<<", "<<y;
    delete eqS;
    return 0;
}
