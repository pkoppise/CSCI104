#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateCombination(int index)
{
    vector<vector<int>> combi;
    if(index <= 1)
    {
        cout << "No combination can be generated" << endl;
    }
    else
    {
        for(int i = 0; i < index; i++)
        {
            vector<int> help;
            for(int j = i + 1; j < index; j++)
            {
                help.push_back(i);
                help.push_back(j);
                combi.push_back(help);
                help.clear();
            }
        }
    }
    
    return combi;
}

int main()
{
    size_t size = 15;
    int arr[size] = {1,2,3,4,5,6,7,8,8,9,10,11,12,13,14,15};
    int k = 2;
    while(k < size)
    {
        vector<vector<int>> result = generateCombination(k);
        for(int p = 0; p < result.size(); p++)
        {
            if(result[p].size() == 2)
            {
                if(arr[k]*arr[k] == (arr[result[p][0]]*arr[result[p][0]]) + (arr[result[p][1]]*arr[result[p][1]]))
                {
                    cout << arr[k] << " " << arr[result[p][0]] << " " << arr[result[p][1]]  << endl;
                    break;
                }
            }
        }
        k++;
    }
    return 0;
}
