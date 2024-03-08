// 	                                                     V...TPsnnwwnnPC..............jm..............a..............................Aw
//                  .ymNq..                                Yq.en....ye....pc.....pM...............g......................................Y.
//            .ymPf.       ..YNwp...                   .c.......yc....yC......r................jE...h........j...je..........................Y
//     .pmPf..                       ....jC         r.......aN......g......yP..m.............jC...jb.........j....p..k..........................k
//     j.                                jH      y......yCg..vp...j....ycy.yjA..............p...pjO..........Fk...Op..k...........Jp..............h.
//     K                                 g       .      gJC.r...jN..r...bC.gjp...........M.F.jC..b..........jHj..jOH...k............Q...............Y
//    jN                                 k                 .jAbNfkC    .  f.b.........yC  gjC   j.h.........F. pjO.L....p............Jp...............C
//    jh                                 N                r.NNNj.                 ....    P.    KOjlPfYsw..y.  b.  L.....p.............Ap....W.........k
//    gH             qNNp                N              A...NNqb   ..                       .....                  ..  ..Jp..............Xp....q........L
//    B          jpNNNNNNNNNNNp          N            y.....lNj.      ....                                                Jp...............ln...Jp.......p
//   jC                     jNNC         N           A.......jN                                                            .p.................q...k......j
//  jE                   .gpNNP          N          C......jNNp                                                             .g..................V..t.....j.
//  .h                NNNNC.             N         b......KNNNh                                          ...                  t...................Xpj....j.
//   K.              gpp                 k        h.....gNNNNNN                                   .ugjgpppppppc                KW.......jp...........Q...j
//   jp             gNN.                 g       L.pn.gNNNNNNNNp     ......                     hP.............                NqNp......Jp............Y.F
//   jE            gNNgNNr   jNN         K      Z...gNNNNNNNNNNN.  upNNNNNNNNn                                                  jNNNp......Y..............C      Ap
//   Jh           gNNN..NNp jNNC         fH  .C...gNNNNNNNNNNNNNh. C.                                                           .jNp.Jp.....Jp..............Y..C...
//   jh          fNN.   JNNNNP.          jpz....jNNNNNNNNNNNNNNNNb.                                                               .  jNY......k.........Jq....JQ.C      ac..
//   jC            ...........            C...MfNNNNNNNNNNNNjNNNNNk                                                                 jH...V.....j...........V....lp..........
//   jH            lPP.....jNNP           Et. jNNNNNNNNNNNNgNNNNqCj                                                                  Jp...Jp....t............C....t.......y
//   B              g.     JC             B   KNNNNNNNNNNNNjNNNj. j                      ....wwsPPYYvw..                            .g......Q....L............l.....p..ppC
//  jh            KNN.                    B   NNNNNjNNNNNNNjNNy   L                ..cP..................V                          ....... .hp...p.............W....VP.
//   Jp           .NNNNNNNNNNNN          jC  jNNNNNNNNNNNNNNNq.   f              ge......................jO                              .gNNgNp..j..............lp...pqu..
//    jC                                 g    NNNNqNNNNNNNNNNi     p            Jp.......................h                     .KNNNNNNbNNjNNNNNp.jNp..............p..jNpNP
//     K                                 N    gNNNNpNNNNNNNNNL      L.           .W....................P.                   .yQNNNNNNNjNCFNNNNNNN.jNNp...jp.........p..H
//     jE                               jC     pNNCJpNNNNNNNNNC       v.            .Yc............                      .vE..KNNggNbNdy jNNgpNNNpjNppb...y.........Hp.H
//      g                               j.      NNL  QNNNNNNNpNC        .w.                                           .........JpNgNNNNNgjNNNNNNNbgNNNNN..j........f tj.
//      K.                              j.             VhNNNNNpNk           .v..                                ..aC..........jNNNNNNNjNNNNNNNNNNHNNNNNNb.jH......j.  .
//      lNNNNNwpp.                      lC               .YqpNNpNN.             fZw...                    ..ypN............yNgNNNNNNyNNNNNNNNNNNNNNNNNNNNkjH.....j.
//                 .YWp....ypmmmNNNNNNNmmN                    .Y.Yph.          A..JCf....Yy..........ypNNNNNO..........jNbNNNNNNNNjNNNNNNNNNNNNNNNNNNNNNNNj.....gNNb
//                                                                  YQy       .     bjb.pNNNNNNNyNNqNNNNQ.........pmPNNNNNNNNNNNqNNNNNNNNNNNNNNNNNNNNNNNNNO...gNNNNNE
//                                                                                .ANNNNgPjNNqNNNNNNgppNNjppmNNgNNNNNNNNNNNNNNNyNNNNNNNNNNNNNNNNNNNNNNNNNOjgNNNNNNNNNC

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;
ll const mod = 1e9+7;

#define p_ary(ary,a,b,i) do { cout << "["; for (int (i) = (a);(i) < (b);++(i)) cout << ary[(i)] << ((b)-1 == (i) ? "" : ", "); cout << "]\n"; } while(0)
#define p_map(map,it) do {cout << "{";for (auto (it) = map.begin();;++(it)) {if ((it) == map.end()) {cout << "}\n";break;}else cout << "" << (it)->first << "=>" << (it)->second << ", ";}}while(0)

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 1,cnt = 1;
    int m = 0;
    if (s[0] == 'W' || s[2*n-1] == 'W') ans = 0;
    bool f = false;
    for (int i = 1;i < 2*n;++i) {
        if (s[i-1] == s[i]) f = !f;
        if (f) {
            (ans *= cnt) %= mod;
            cnt--;
            m++;
        } else cnt++;
    }
    if (m != n) ans = 0;
    for (int i = 1;i < n+1;++i) (ans *= i) %= mod;
    cout << ans << endl;
}