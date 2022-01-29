#include <bits/stdc++.h>
using namespace std;

template<typename T>
concept range_t = std::ranges::range<T>;
struct debug {
    ~debug() {
        cerr << endl;
    }
    template<class T, class U>
    debug& operator<<(pair<T, U> x) {
        return *this << "(" << x.first << " " << x.second << ")";
    }
    template<range_t T>
    debug& operator<<(T x) {
        *this << "[";
        auto last_item = x.end();
        --last_item;
        for (auto it = x.begin(); it != x.end(); ++it) {
            *this << *it;
            if (it != last_item) *this << " ";
        }
        return *this << "]";
    }
    template<typename T>
    debug& operator<<(T x) {
        cerr << boolalpha << x;
        return *this;
    }
};
void dmpr(debug&os){
    os<<"\n";
}
template<class T,class... Args>
void dmpr(debug& os,const T&t,const Args&... args){
    os<<t<<", ";
    dmpr(os,args...);
}
