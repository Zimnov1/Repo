#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long h[4], d[4], hmax = 0;
    string answer;

    for (int i = 0; i < 4; ++i) {
        cin >> h[i];
    }

    for (int i = 0; i < 4; ++i) {
        cin >> d[i];
        if (d[i] > h[i]) {
            answer = "ERROR";
            break;
        }
    }
    long long hmin = h[0];
    for (int i = 0; i < 4; ++i) {
        
        if (hmax < h[i]) {
            hmax = h[i];
        }
        h[i] -= d[i];
        if (hmin > h[i]){
            hmin = h[i];
        }
        if (hmax >= 2 * hmin && answer !="ERROR") {
            answer = "NO";
            break;
        }
    }

    if (h[0] == h[1] && h[1] == h[2] && h[2] == h[3] && h[0]!=0 && answer != "NO" && answer != "ERROR") {
        answer = "YES";
    }else{
        if(answer!="ERROR")
        answer="NO";
    }
    cout << answer;
}


