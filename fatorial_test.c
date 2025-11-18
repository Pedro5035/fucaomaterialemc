#include <assert.h>
#include <stdio.h>

int fatorial(int n);

int main() {

    // Testes corretos
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(5) == 120);
    assert(fatorial(6) == 720);

    // Teste com número negativo (retorno -1)
    assert(fatorial(-3) == -1);

    printf("Todos os testes passaram!\n");

    return 0;
}
