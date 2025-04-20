#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Atul"] = 56;
    marksMap["Atl"] = 79;
    marksMap["Aul"] = 45;
    marksMap["tul"] = 5;
    marksMap["Atol"] = 12;

    map<string, int>::iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << "  " << (*iter).second << endl;
    }
    // marksMap.insert({pair_1,pair_2});
    // marksMap.insert(  {  {  shivam,46 } , { tanu,78 }  }  );
    // for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    // {
    //     cout << (*iter).first << "  " << (*iter).second << endl;
    // }
    return 0;
}