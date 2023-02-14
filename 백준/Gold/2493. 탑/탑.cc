#include <iostream>
#include <stack>
using namespace std;
#define INDEX first
#define HEIGHT second

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    stack<pair<int, int>> st;
    for(int i=0; i<N; i++){
        int height;
        cin >> height;
        while (!st.empty()) {
            if(st.top().HEIGHT > height){
                cout << st.top().INDEX+1 << ' ';
                break;
            }
            st.pop();
        }
        if(st.empty()){
            cout << 0 << ' ';
        }
        st.push({i, height});
        
    }
    cout << '\n';
    return 0;
}