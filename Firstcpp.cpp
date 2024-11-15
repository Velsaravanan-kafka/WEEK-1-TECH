#include <iostream>
#include <vector>
using namespace std;
void vectorfunc();
int main()
{
    cout << "Hello world" <<endl;
    /* pair<int, pair<int, int>> p={1,{2,3}};
    cout << p.second.first <<" "<<p.second.second; alt shift a */
   
    vectorfunc();
    return 0;
}
void vectorfunc(){
    vector<int> v(5,10);
    // v.push_back(1);
    vector<int>::iterator it = v.begin();
    cout<< *(it) << " ";
    it++;
    for(auto it= v.begin(); it !=v.end(); it++)
    {
        cout<<*(it)<<endl;
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    


}
