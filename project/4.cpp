#include<iostream>

using namespace std;

const int Max = 5;

int fill_array(double arr[], int limit);

void show_array(const double arr[], int n);

void revalue(double r, double arr[],int n );

int main(void)
{
    double properties[Max];

    int size = fill_array(properties,Max);
    show_array(properties, size);
    if(size > 0 )
    {
        cout << "Eeter revaualion factor : ";
        double factor; 
        while(!(cin >> factor))
        {   
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "Bad iuput; input process terminated.\n";
        } 
        revalue(factor, properties, size);
        show_array(properties, size);

    }

    return 0;
}

int fill_array(double arr[], int limit)
{   double tmp;
    int i ; 
    for (i = 0 ; i < limit ; i++)
    {  
        cout << "   Enter value#" << (i+1) << ":" ;
        cin >> tmp;
        if (!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input : input process terminted.\n";
            break;
        }
        else if (tmp < 0)
            break;
        else 
        arr[i] = tmp;
    }
    return i;
}   

void show_array(const double arr[], int n)
{    
    for(int i = 0 ; i < n ; i++ )
    {
        cout << "Property #" << i+1 << ": $";
        cout << arr[i] << endl;

    }
}

void revalue(double r, double arr[],int n )
{
    for(int i = 0; i < n; i++)
    {
        arr[i] *= r;
    }
}