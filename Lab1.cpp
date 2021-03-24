#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{   setlocale(LC_ALL,"Rus");
     srand(time(NULL));
    int Size=0,restr=0, Max_num=0;
    int *arr = new int[Size];

    cout<<"¬веди желаемый размер массива и диапозон рандома цифр"<<endl;
    cin>> Size;
    if (cin.fail())
 {


     cin.clear ();
    cin.ignore(32767, '\n');
    fflush(stdin);
    cout<<"Ёто не целое число " << endl;
    };
    cin>> restr;
 if (cin.fail())
 {


     cin.clear ();
    cin.ignore(32767, '\n');
    fflush(stdin);
    cout<<"Ёто не целое число " << endl;
    }


        for( int i =0; i< Size;i++)
        {
            arr[i]= rand()%restr;
            if (arr[i]> Max_num){
                arr[i]== Max_num;
                }
        }
delete [] arr;
cout<<Max_num<<endl;
return 0;

}
