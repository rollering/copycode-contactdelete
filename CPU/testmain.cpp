#include "BenchMark.h"
#include "BenchMark_HeavyChange.h"
#include "BenchMark_Synthetic.h"

using namespace std;
int main()
{
    ifstream input("/home/roll/Desktop/vscodecode/hyperUSS/HyperUSS/data/Synthetic/Hyper_zipf_1.500_10K10V.txt");
    if(!input){cout<<"failed to open file"<<endl;return 1;}
    int a=0;
    string line;
    while(getline(input,line)){
        istringstream iss(line);
        for (int i = 0; i < 2; i++) {
            uint32_t tmp;
            iss >> dec >> tmp;
            cout << static_cast<int>(tmp) << " ";
        }
        for (int j = 0; j < 1; j++) {
            uint32_t tmp1;
            iss >> hex >> tmp1;
            cout << hex << static_cast<int>(tmp1) << " ";
        }
        cout<<endl;
    }
    

}