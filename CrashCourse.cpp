#include <iostream>
using namespace std;

// function declaration
float sum(float a, float b){
    return a + b;
}

// void funciton
void introduceMe(string name){
    cout << "Hello my name is: " << name << endl;
}

// for pointers = add pointer *
void celebrateBirthday(int* age){
    (*age)++;
    cout << "Celebrated " << *age << ". birthday" << endl;
}

int main()
{
    // sample print
    cout <<  "Hello World!\n";

    // variable = container
    string username = "Vlahdimyr";
    int age = 21;
    age = 22; // change value

    float weight = 55.5;
    double balance = 1096.123;
    char gender = 'M';

    bool isTodaySunny = false;
    bool isTodayWeekend = false;


    string colors[10] = {"green", "blue", "red"};
    cout << colors[0] << endl;
    // cin >> colors[0];
    // cout << colors[0];
    colors[1] = "gray";


    // conditionals and logical operator
    if(isTodaySunny && isTodayWeekend){
        cout << "Let's go to the park!" << endl;
    } else if (isTodayWeekend && !isTodaySunny) {
        cout << "Bring an umbrella!" << endl;
    } else {
         cout << "Go to work!" << endl;
    }

    // ternary operator = one liner conditional
    isTodaySunny ?  cout << "Let's go to the park!" << endl : cout << "Bring an umbrella!" << endl;

    // nested version
    if(isTodayWeekend){
        if(isTodaySunny){
            cout << "Let's go to the park!" << endl;
        } else {
            cout << "Bring an umbrella!" << endl;
        }
    } else {
        cout << "Go to work!" << endl;
    }


    // switch case 
    enum EyeColor {Brown, Blue, Green, Gray, Others};

    EyeColor eyeColor = Brown;

    switch(eyeColor) {
        case Brown: cout << "80% of people have brown eyes"; break;
        case Blue: cout << "10% of people have blue eyes"; break;
        case Green: cout << "2% of people have green eyes"; break;
        case Gray: cout << "1% of people have gray eyes"; break;
        case Others: cout << "7% of people have other eyes"; break;
        default: cout << "Not valid eye color";
    }

    // loops
    cout << "while" << endl;
    int counter = 1;
    while(counter <= 3){
        cout << counter << endl;
        counter++;
    } 

    cout << "do-while" << endl;
    int counter2 = 1;
    do {
        cout << counter2 << endl;
        counter2++;
    }  while(counter2 <= 3);

    cout << "for" << endl;
    string animals[5] = {"cat", "dog", "cow", "bird", "bee"};
    for (int i = 0; i < 5; i++){
        cout << animals[i] << endl;
    }


    // function invoke/call
    cout << sum(2.5, 3.5) << endl;
    introduceMe("Vlahd");


    // pointers
    int myAge = 25;
    cout << "Before function age: " << myAge << endl;
    celebrateBirthday(&myAge); // add address
    cout << "Before function age: " << myAge << endl;



    system("pause>0");
}

