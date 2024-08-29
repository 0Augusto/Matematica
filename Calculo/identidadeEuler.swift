import Foundation

// Função para calcular e^(i * pi) e retornar o valor real
func eToThePowerOfIpi() -> Double {
    let pi = Double.pi
    let realPart = cos(pi) // Parte real de e^(i * pi)
    return realPart
}

// Calcula e^(i * pi) + 1
let result = eToThePowerOfIpi() + 1

// Verifica se o resultado é aproximadamente zero
let epsilon = 1e-10 // Tolerância para comparação com zero
if abs(result) < epsilon {
    print("Euler's identity is approximately satisfied: e^(iπ) + 1 ≈ 0")
} else {
    print("Euler's identity is not satisfied.")
}


