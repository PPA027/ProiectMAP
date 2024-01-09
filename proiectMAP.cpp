#include<iostream>
#include<string>

using namespace std;

int toh(int n, char a, char b, char c, int &nr)
{
    if (n == 1){
        cout<<"\nMutam discul 1 de la " << a <<" la " << c << endl;
        nr ++;
        return nr;
    }

    toh(n-1 , a, c, b, nr);
    nr++;
    cout << "\nMutam discul " << n << " De la " << a <<" la " << c << endl;

    toh(n-1, b, a, c, nr);
}
int main()
{
    int N;
    int nr = 0;
    cout <<"Introduceti numarul de discuri: ";
    cin >> N;
    cout << endl;
    toh(N,'A','B','C', nr);
    cout <<"\nNumarul minim de mutari este: " << nr;
}