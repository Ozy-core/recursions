#include <iostream>

using namespace std;

int fab_sequence(int i)
{
    if(i>0)
    {
        cout<< fab_sequence(i-1)+fab_sequence(i-1)<<endl;
    }
    return 0;
}


int main()
{
    int amt;

    cout<< "Enter number: " << endl;
    cin >> amt;

    fab_sequence(amt);

    return 0;
}