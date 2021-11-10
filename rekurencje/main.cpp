#include <iostream>
using namespace std;

int zadaniedrugie(int n)
{
    if (n==1)
        return 2;
    else if (n==2)
        return 3;
    else
        return zadaniedrugie(n-1)*zadaniedrugie(n-2);
}

int zadanieczwarte(int n)
{
    if (n==1)
        return 2;
    else
        if (n%2==0)
            return zadanieczwarte(n-1)*2;
        else
            return zadanieczwarte(n-1)+3;
}

int zadaniepiate(int n)
{
    if (n==1)
        return 1;
    else
        if (n==2)
            return 3;
        else
            if (n%2==0)
                return 3*zadaniepiate(n-1)-zadaniepiate(n-2)+1;
            else
                return zadaniepiate(n-2)*2;
}


int main() {
    int n=0;
    
    
    cout << "podaj n" << endl;
    cin >> n;
    
    //cout << zadaniedrugie(n) <<endl;
    cout << zadanieczwarte(n) <<endl;
    //cout << zadaniepiate(n) <<endl;
    
    
    
    return 0;
}
