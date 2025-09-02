"""
7- Em C, crie uma struct Ponto {int x; int y;}. Aloque dinamicamente um ponto
com malloc, atribua valores para x e y via ponteiro e imprima as coordenadas. (Em
Python, faça apenas a criação e atribuição de atributos em uma classe Ponto).
"""
class Ponto:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
x_ponto = int(input("Digite a coordenada x do ponto: "))
y_ponto = int(input("Digite a coordenada y do ponto: "))
ponto = Ponto(x_ponto, y_ponto)
print(f"Coordenadas do ponto: ({ponto.x}, {ponto.y})")