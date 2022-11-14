
#include<iostream>

using namespace std;

int main()
{
    char nama[] = "Gagan Hariyanto";
    char nim[] ="1911400305";
    
    int nilai;
    
    cout <<"Masukan Nilai : ";
    cin >> nilai;
    
    switch(nilai)
    {
        case 85 ... 100:
            cout<<"Grade anda A"<<endl;
            break;
        case 75 ... 84:
            cout<<"Grade anda B"<<endl;
            break;
        case 50 ... 74:
            cout<<"Grade anda C"<<endl;
            break;
        case 20 ... 49:
            cout<<"Grade anda D"<<endl;
            break;
        default :
            cout <<"Grade anda E"<<endl;
            break;
    }

}   
