// Solucion a problema en la plataforma OmegaUP
// https://omegaup.com/arena/problem/Las-rosas-del-jardin-de-la-Reina#problems


#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>

int main( ) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> rosas_b;

    int p;
    char c;

    for(int i = 0; i < n; ++i) {
        std::cin >> p >> c;
        if(c == 'B') {
            rosas_b.push_back(p);
        }
    }

    int m;
    std::cin >> m;

    std::sort(rosas_b.begin( ), rosas_b.end( ));

    int ini, fin;
    for(int i = 0; i < m; ++i) {
        std::cin >> ini >> fin;
        auto bus_ini = std::lower_bound(rosas_b.begin( ), rosas_b.end( ), ini);
        auto bus_fin = std::upper_bound(rosas_b.begin( ), rosas_b.end( ), fin);
        std::cout << bus_fin - bus_ini << '\n';
    }

}
