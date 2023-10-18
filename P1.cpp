#include <iostream>
#include <ctime>

// Función para calcular el producto punto de dos arreglos de tipo float
float DotProduct(float* arr1, float* arr2, int N) {
    float result = 0.0;
    for (int i = 0; i < N; i++) {
        result += arr1[i] * arr2[i];
    }
    return result;
}

int main() {
    const int N = 1000; // N mayor a 500 y multiplo de 4
    float arr1[N];
    float arr2[N];

    // Llena los arreglos con datos
    for (int i = 0; i < N; i++) {
        arr1[i] = 2.0; 
        arr2[i] = 4.0; 
    }

    // Mide el tiempo de ejecución sin optimización
    clock_t start_time = clock();
    float result = DotProduct(arr1, arr2, N);
    clock_t end_time = clock();
    double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Resultado del producto punto: " << result << std::endl;
    std::cout << "Tiempo de ejecución (sin optimización): " << elapsed_time << " segundos" << std::endl;

    return 0;
}
