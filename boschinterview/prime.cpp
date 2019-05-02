#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> prime;
    bool is_prime = true;
    size_t size = 25;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 1)
        {
            is_prime = false;
        }
        else if(arr[i] == 2)
        {
            prime.push_back(arr[i]);
            is_prime = true;
        }
        else
        {
            is_prime = true;
            for(int j = 2; j < arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if(is_prime)
            {
               prime.push_back(arr[i]); 
            }
        }
    }
    
    for(auto itr = prime.begin(); itr != prime.end(); ++itr)
    {
        cout << *itr << endl;
    }

}
