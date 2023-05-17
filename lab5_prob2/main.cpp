#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cstring>

using namespace std;

struct Node {
    bool operator<(Node &n) {
        return rev_num < n.rev_num;
    }

    bool operator>=(Node &n) {
        return rev_num >= n.rev_num;
    }

    bool operator==(Node &n) {
        return rev_num == n.rev_num;
    }

    string s;
    int rev_num;
};

int n, m;

int GetRevNum(string &s) {
    int len = s.size();
    int rn = 0;
    map<char, int> mparr[len];
    map<char, int> mp;
    mp['A'] = 0;
    mp['C'] = 0;
    mp['T'] = 0;
    mp['G'] = 0;
    for (int i = 0; i < len; i++) {
        mparr[i] = mp;
        mp[s[i]]++;
    }
    for (int i = len - 1; i > -1; i--) {
        if (s[i] == 'A') {
            rn += mparr[i]['C'];
            rn += mparr[i]['G'];
            rn += mparr[i]['T'];
        } else if (s[i] == 'C') {
            rn += mparr[i]['G'];
            rn += mparr[i]['T'];
        } else if (s[i] == 'G') {
            rn += mparr[i]['T'];
        } else {
            rn += 0;
        }
    }
    return rn;
}

void InsertSort(Node *arr, int len) {
    int i, j;
    for (i = 1; i < len; i++) {
        Node e = arr[i];
        for (j = i - 1; j >= 0 && (e < arr[j] || (e == arr[j] && e.s.compare(arr[j].s) > 0)); j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = e;
    }
}

int main() {
    cin >> n >> m;
    Node arr[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].s;
        arr[i].rev_num = GetRevNum(arr[i].s);
    }
    //sort(arr, arr + n);
    InsertSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i].s << " " << "rev_num = " << arr[i].rev_num << endl;
    }
    return 0;
}
