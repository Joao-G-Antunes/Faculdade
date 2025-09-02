"""
8- Reaproveite a struct Retangulo (com largura e altura). Implemente uma função
redimensionar que receba o retângulo por ponteiro (em C) ou referência (em Python) e
multiplique suas dimensões por um fator de escala. Demonstre no programa principal a área
antes e depois.
"""
class Retangulo:
    def __init__(self, largura, altura):
        self.largura = largura
        self.altura = altura

    def area(self):
        return self.largura * self.altura

    def redimensionar(self, fator):
        self.largura *= fator
        self.altura *= fator
    
largura_retangulo = float(input("Digite a largura do retângulo: "))
altura_retangulo = float(input("Digite a altura do retângulo: "))
fator_escala = float(input("Digite o fator de escala para redimensionar: "))
retangulo = Retangulo(largura_retangulo, altura_retangulo)
print(f"Área do retângulo antes do redimensionamento: {retangulo.area()}")
retangulo.redimensionar(fator_escala)
print(f"Área do retângulo depois do redimensionamento: {retangulo.area()}")