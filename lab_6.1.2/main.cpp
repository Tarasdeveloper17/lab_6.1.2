
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void createArray(int *s, const int size, const int maxNum, const int minNum, int i)
{

    int arr;
    arr = s[i] =  minNum + rand() % (maxNum - minNum + 1);
    cout << arr << " ";
    if(i < size-1)
    {
        createArray(s, size, maxNum, minNum, i+1);
    }
    else
    {
        cout <<endl;
    }
}

int Sum(int *s, const int size, int i, int S)
{
    
    if(!((s[i] % 2 !=0) && (i % 3 == 0)))
    {
        S+=s[i];
    }
    
    if(i < size - 1)
        return Sum(s, size, i + 1, S);
    else
        return S;

}


void countArr(int *s , const int size, int i , int count)
{

    if(!((s[i] % 2 !=0) && (i % 3 == 0)))
    {
        count++;
    }
    
    if (i < size-1)
    {
        countArr(s, size, i+1, count);
        
    }
    
    else
    {
        
        cout << "Count = " << count<<endl;;
    }
}



void nullArr(int *s, const int size, int i)
{
    if(!((s[i] % 2 !=0) && (i % 3 == 0)))
    {
        s[i] = 0;
    }
    cout << s[i] << " ";
    if (i < size-1)
    {
        nullArr(s, size, i+1);
            cout << " ";
    }

}




int main() {
    srand((unsigned)time(NULL));

    const int n = 23;
    int s[n];
    int max = 16;
    int min = 4;
    createArray(s, n, max, min,0);
    cout << "Sum: "<< Sum(s, n,0,0)<<endl;
    countArr(s, n,0,0);
    nullArr(s, n,0);


    return 0;
}



