#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;




int main(int argc, char* argv[])
{
int x=10;
int y=12;
int i;
int j;



for (int i = 0; i < argc; ++i)
    {
        for (int j=0;j<argc;j++)
    {
cout<<"                                        *"<<endl;
cout<<"                                       ***"<<endl;
cout<<"                                      *****"<<endl;
cout<<"                                     *******"<<endl;

cout << argv[i] << endl;
}

char* tekst="*";
int liczba = atoi(tekst);

int nwierszy=10;
if (argc !=2)
{
    cout<<"Niewlasciwe argumenty w linii komend!"<<endl;
    cout<<"Wywolanie programu:cw_2 Liczba wierszy"<<endl;
}





    }
    return 0;
}


