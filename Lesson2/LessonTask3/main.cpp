#include <iostream>

using namespace std;

unsigned int addTwoGoals(unsigned int numberOfGoalsToAdd){
numberOfGoalsToAdd = numberOfGoalsToAdd + 2;
return numberOfGoalsToAdd;
}

unsigned int addTwoGoalsRef(unsigned int &numberOfGoalsToAdd){
numberOfGoalsToAdd = numberOfGoalsToAdd + 2;
return numberOfGoalsToAdd;
}

int main()
{
    cout << "Number of goals"<< endl;
    cout << endl;
    unsigned int numberOfGoals=12;
    cout<< "number of goals: "<<numberOfGoals<< endl;

    cout << endl;

    unsigned int incomeOfNumberOfGoals = addTwoGoals(numberOfGoals);
    cout<< "number of goals ref: "<<incomeOfNumberOfGoals<< endl;
    cout<< "number of goals: "<<numberOfGoals<< endl;

   cout << endl;

    incomeOfNumberOfGoals = addTwoGoalsRef(numberOfGoals);
    cout<< "number of goals: "<<incomeOfNumberOfGoals<< endl;
    cout<< "number of goals: "<<numberOfGoals<< endl;
    return 0;
}
