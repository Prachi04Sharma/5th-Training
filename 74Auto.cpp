// Auto:-
// Scope- Local to the block in which it is defined.
// Lifetime- Automatically destroyed when the block is exited.
#include <iostream>
using namespace std;
/*int main(){
    auto x = 10; //x is automatically assume to be of int type
    cout << x << endl;
    }*/
void example()
{
    register int counter = 0;
    for (register int i = 0; i < 10; ++i)
    {
        counter += i;
    }
    cout << counter;
}

int main()
{
    example();
}