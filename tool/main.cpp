#include "NalUtil.h"
#include <iostream>

using namespace std;

int main() {
    cout << "hello world" << endl;
    char *sSPS = nullptr;
    int nSPS = 0;
    int nProfile;
    int nLevel;
    int nWidth;
    int nHeight;
    NALUTIL_ParseSPS(sSPS, nSPS, &nProfile, &nLevel, &nWidth, &nHeight);

    return 0;
}