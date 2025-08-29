"""6- Defina uma struct Aluno em C (ou class em Python) com os campos: nome, 
matricula e IRA (índice de rendimento acadêmico). No programa principal, crie uma 
instância, atribua valores e imprima os dados."""
class Aluno:
    def __init__(self, nome, matricula, ira):
        self.nome = nome
        self.matricula = matricula
        self.ira = ira

nome_aluno = str(input("Digite o nome do aluno: "))
matricula_aluno = int(input("Digite a matricula do aluno: "))
ira_aluno = int(input("Digite o ira (Índice de Rendimento Acadêmico) do aluno: "))
aluno = Aluno(nome_aluno, matricula_aluno, ira_aluno)
print(f"Nome do aluno: {aluno.nome}\nMatricula do aluno: {aluno.matricula}\nIra do aluno: {aluno.ira}")
