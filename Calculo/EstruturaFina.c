#include <stdio.h>
#include <math.h>

// Definição da constante de estrutura fina
#define ALPHA 0.0072973525693
#define PLANCK 6.62607015e-34
#define C 299792458.0
#define E 1.602176634e-19

// Função para calcular o desdobramento fino em níveis de energia
double calcular_desdobramento_fino(int n, int l, int j) {
    // n = número quântico principal
    // l = número quântico orbital
    // j = número quântico momento angular total
    double energia_base = 13.6; // energia em eV
    double fator_correcao = (ALPHA * ALPHA * energia_base) / (n * n);
    double termo_j = (j * (j + 1)) - l * (l + 1) - 0.75;
    return fator_correcao * termo_j;
}

// Função para calcular a seção de choque do efeito fotoelétrico
double calcular_secao_choque_fotoeletrico(double energia_foton) {
    double secao_choque;
    secao_choque = 8.0 * M_PI * ALPHA / (3.0 * energia_foton);
    return secao_choque * pow(PLANCK / (2 * M_PI), 2);
}

// Função para calcular o comprimento de onda Compton
double calcular_comprimento_compton(double angulo) {
    double lambda_compton = PLANCK / (C * 9.1093837015e-31);
    double delta_lambda = lambda_compton * (1 - cos(angulo));
    return delta_lambda;
}

// Função para calcular a intensidade da radiação de corpo negro
double calcular_radiacao_corpo_negro(double temperatura, double frequencia) {
    double h_freq = PLANCK * frequencia;
    double kb = 1.380649e-23;
    double intensidade = (2 * h_freq * frequencia * frequencia * ALPHA) /
                        (C * C * (exp(h_freq / (kb * temperatura)) - 1));
    return intensidade;
}

// Função para calcular o padrão de interferência quântica
double calcular_padrao_interferencia(double distancia, double separacao_fendas) {
    double lambda = 500e-9; // comprimento de onda típico (500nm)
    double intensidade = pow(cos(M_PI * separacao_fendas * distancia / (lambda * 0.1)), 2);
    return intensidade * ALPHA;
}

int main() {
    printf("=== Aplicações da Constante de Estrutura Fina ===\n\n");

    // 1. Desdobramento fino (estado 2p3/2)
    double desdobramento = calcular_desdobramento_fino(2, 1, 3/2);
    printf("1. Desdobramento fino (2p3/2): %.6e eV\n", desdobramento);

    // 2. Seção de choque fotoelétrica (fóton de 1 keV)
    double secao = calcular_secao_choque_fotoeletrico(1000);
    printf("2. Seção de choque fotoelétrica: %.6e m²\n", secao);

    // 3. Deslocamento Compton (90 graus)
    double compton = calcular_comprimento_compton(M_PI/2);
    printf("3. Deslocamento Compton (90°): %.6e m\n", compton);

    // 4. Intensidade de radiação de corpo negro (300K, 1e12 Hz)
    double radiacao = calcular_radiacao_corpo_negro(300, 1e12);
    printf("4. Intensidade de radiação (300K): %.6e W/m²/Hz\n", radiacao);

    // 5. Padrão de interferência (1mm, 0.1mm)
    double interferencia = calcular_padrao_interferencia(0.001, 0.0001);
    printf("5. Intensidade de interferência: %.6f\n", interferencia);

    return 0;
}
