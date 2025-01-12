```
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() {
    cout << "Welcome to GUESS THE NUMBER..!!!"<<endl;
    cout << "Let me think of a random number between 1 and 30 and you'll have to guess it within 5 attempts."<<endl;
    cout << "Let the Guessing Begin..."<<endl;
    srand(time(0));
    int target=rand()%30 +1;
    
    for (int i=1;i<=10;i++){
        cout << "(attempt:"<<i<<") Type your guess here -->";
        int inp;
        cin>> inp;
        if(inp==target){
            cout <<"!!  YOU WON !!"<<endl;
            break;
        }
        else if(inp>target) cout << "Try again you were a bit higher."<<endl;
        else cout << "Try again you were a bit lower."<<endl;
    }
    return 0;
}
```
