#include <iostream>
#include<vector>
using namespace std;

int main() {
    freopen("generate.txt", "w", stdout);
    vector<string> D({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> Q({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> L({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> C({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> G({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});

    for (int i = 0; i < D.size(); i++) {
        for (int j = 0; j < Q.size(); j++) {
            for (int l = 0; l < L.size(); l++) {
                for (int a = 0; a < C.size(); a++) {
                    for (int b = 0; b < G.size(); b++) {
                        if (D[i][1] == Q[j][1] || D[i][1] == L[l][1] || D[i][1] == C[a][1] || D[i][1] == G[b][1]) {
                            std::cout << "F ";
                        } else {
                            std::cout << "T ";
                        }
                    }
                }
            }
        }
    }

    return 0;
}