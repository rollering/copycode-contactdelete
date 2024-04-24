#include "BenchMark.h"
#include "BenchMark_HeavyChange.h"
#include "BenchMark_Synthetic.h"

using namespace std;
int main()
{
    BenchMark_Synthetic dataset("/home/roll/Desktop/vscodecode/hyperUSS/HyperUSS/data/Synthetic/Hyper_zipf_1.500_10K10V.txt","dataset");
    dataset.HHHyperBench(1000 * 500);
}