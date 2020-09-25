
#include <fstream>
#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

const int w_1m = 10000001;
int w[w_1m];

bool is_match(int t, int w[], int w_length)
{  
   int left = 0;
    int rigrht = w_length - 1;
    int mid = 0;
    while (left <= rigrht) {
        mid = (left + rigrht) / 2;
        if (t == w[mid]) {
            return true;
        }
        else if (t < w[mid]) {
            rigrht = mid - 1;
        }
        else if (t > w[mid]) {
            left = mid + 1;
        }
    } 
    return false;
}


int main(int argc, char* argv[])
{
    if (argc != 3 || strcmp(argv[1], "-w"))
    {
        return 1;
    }
    ifstream infile;
    infile.open(argv[2]);
    int i = 0;
    // cout << argv[2]<< endl;
    while (infile >> w[i++])
    {
    }
    int w_length = i - 1;
  //  cout << w_length << endl;

    int t = 0;
    sort(w, w + w_length);

    while (cin >> t)
    {

        if (is_match(t, w, w_length))
        {
            cout << t << endl;
        }
    }
}



