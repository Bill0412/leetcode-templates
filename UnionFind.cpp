int uf[100005];

void Init() {
    for(int i = 0; i < 100005; ++i) {
        uf[i] = i;
    }
}
int Find(int a) {
    if(uf[a] == a) return a;
    return (uf[a] = Find(uf[a]));
}

void Union(int a, int b) {
    int a_ = Find(a);
    int b_ = Find(b);
    uf[a_] = b_;
}