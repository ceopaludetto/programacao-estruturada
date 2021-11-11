/*

    Você deve deixar esqueleto de código neste arquivo intacto 
    (i.e. a linha de include e o cabeçalho da função). Você
    só pode escrever código dentro do corpo da fução.

*/

#include "decisao.h"

int encontra_valor(int n, int M[10000][4], int x) {    
    int i = 0;
    
    while (1) {
        int y = M[i][1];
        int type = M[i][0];
        int posIndex = M[i][2];
        int negIndex = M[i][3];
        
        if (type == 0) return y;
        
        if (type == 1) {
            if (x < y) i = posIndex;
            else i = negIndex;
            continue;
        }
        
        if (type == 2) {
            if (x > y) i = posIndex;
            else i = negIndex;
            continue;
        }
        
        if (type == 3) {
            if (x == y) i = posIndex;
            else i = negIndex;
            continue;
        }
        
        if (type == 3) {
            if (x % y == 0) i = posIndex;
            else i = negIndex;
            continue;
        }  
    }
}