#include <iostream>
#include <vector> 
#include <ctime>
using namespace std;
int riempivettore(int n, vector<int>v ,bool flag)
{
    srand(time(0));
    int i, x;
    i=0;
    if  (flag=true)
    {
        while  (i<n)
        {
            x = 1+ rand()%100;
            if ( x % 2 == 0)
            {
                v[i] = x;
                i=i+1;
            }
        }
    }
    else
    {
        while(i<n)
        {
            x = 1+ rand()%100;
            if (x%2==0)
            {

            }
            else
            {
                v[i] = x;
                i=i+1;
            }
        }
    }
    return 0;
    
}
int visualizzainverso(int n, vector<int>v)
{
    float i;
    i = n-1;
    while(i>=0)
    {
        cout << v[i] << endl;
        i = i-1;
    }
    return 0;
}
int visualizza(int n, vector<int>v)
{
    float i;
    i=0;
    while (i<n)
    {
        cout << v[i] << endl;
        i=i+1;
    }
    return 0;
}
int ordinavettore (int n, vector<int>v)
{
    int i, j, t;
    bool scambio;
    i=0;
    scambio = true;
    while (i<=n-1 and scambio)
    {
        scambio = false;
        j=0;
        while (j<=(n-2)-i)
        {
            if (v[j] > v[j+1] )
            {
                scambio= true;
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
            j=j+1;
        }
        i=i+1;
    }
    return 0;
}
int main()
{
    int n;
    bool flag;
    cout << "quanti numeri generare" << endl;
    cin >> n;
    vector<int>p(n);
    vector<int>d(n);
    flag = true;
    riempivettore(n,p,flag);
    flag = false;
    riempivettore(n,d,flag);
    ordinavettore(n,p);
    ordinavettore(n,d);
    cout << "vettore pari ordinato in ordine crescente" << endl;
    visualizza(n,p);
    cout << "vettore dispari ordinato in ordine crescente" << endl;
    visualizza(n,d);
    cout << "vettore dispari ordinato in ordine decrescente" << endl;
    visualizzainverso(n,d);
    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
