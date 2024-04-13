#include <iostream>
#include<vector>
using namespace std;

int main() {
    freopen("generate2.txt", "w", stdout);
    vector<string> D({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> Q({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> L({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> C({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});
    vector<string> G({"X1", "X2", "X3", "X4", "Y1", "Y2", "Y3", "Y4"});

    for (int i = 0; i < Q.size(); i++) {
        for (int j = 0; j < D.size(); j++) {
            for (int l = 0; l < L.size(); l++) {
                for (int a = 0; a < C.size(); a++) {
                    for (int b = 0; b < G.size(); b++) {
                        int Qtime=Q[i][1]-'0';
                        int Qchar=Q[i][0];
                        int Ctime=C[a][1]-'0';
                        int Cchar=C[a][0];
                        int Dtime=D[j][1]-'0';
                        int Dchar=D[j][0];
                        int Gtime=G[b][1]-'0';
                        int Gchar=G[b][0];
                        int Ltime=L[l][1]-'0';
                        int Lchar=L[l][0];
                        if((Qchar==Dchar && Dtime>Qtime && Dtime-Qtime<2) || (Qchar==Lchar && Ltime>Qtime && Ltime-Qtime<2) || (Qchar==Cchar && Ctime>Qtime && Ctime-Qtime<2) || (Qchar==Gchar && Gtime>Qtime && Gtime-Qtime<2)){
                            cout << "F ";
                        } else {
                            cout << "T ";
                        }
                    }
                }
            }
        }
    }

    return 0;
}