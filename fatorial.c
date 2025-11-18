int fatorial(int n) {
    if (n < 0) {
        return -1; // erro para número negativo
    }

    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}
