#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout<<"\nenter 3 data:";
    for(int i = 1; i <= 3; i++)
    {
        int data;
        cout<<"\nEnter any number:";
        cin>>data;
        v1.push_back(data);
    }

    int n = v1.size();
    cout<<"\nAFTER INSERTING 5 DATA: size:"<<n<<"\n";
    for(int i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    v1.insert(v1.begin(),555);
    cout<<"\n 555 inserted at begin\n";
        for(int i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    // removes the first element
    v1.erase(v1.end()-2);
    cout<<"\n nElement erased at end\n";
for(int i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    v1.clear();
    n=v1.size();
    cout<<"\nAfter v1.clear() operation size: "<<n;
}//end of main