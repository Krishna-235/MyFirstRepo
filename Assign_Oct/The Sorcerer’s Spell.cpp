#include <iostream>
using namespace std;

int main() {
    string s;
    std::cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {
        std::cout<<s[i];
    }
    return 0;
}
