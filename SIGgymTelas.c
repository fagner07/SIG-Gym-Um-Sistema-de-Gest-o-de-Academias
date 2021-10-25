#include <stdio.h>


/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaVendas(void);
void telaAlunos(void);
void telaEquipe(void);

/////
// Programa principal
int main(void) {
    telaSobre();
    telaPrincipal();
    telaVendas();
    telaAlunos();
    telaEquipe();
    return 0;
}

/////
// Funções

void telaSobre(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                Projeto Sistema de Gestão de Academias                   ///\n");
    printf("///               Desenvolvido por  @fagner07 - Out, 2021                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Gestão de Academias = = = = =            ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa utilizado na disciplina DCT1106 - Programação, para fins      ///\n");
    printf("///  avaliativos. O programa contém os principais módulos e funcionalidades ///\n");
    printf("///  que serão implementados no sistema ao longo do seu desenvolvimento na  ///\n");
    printf("///  disciplina.                                                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaPrincipal(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão de Academias = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Gestão de vendas                                          ///\n");
    printf("///            2. Controle de alunos                                        ///\n");
    printf("///            3. Agenda de aulas                                           ///\n");
    printf("///            4. Controle de catracas                                      ///\n");
    printf("///            5. Relatórios                                                ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

/////
// Menus da tela principal
void telaVendas(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = =        Gestão de vendas        = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Planos e mensalidades                                     ///\n");
    printf("///            2. Roupas e acessórios fit                                   ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaAlunos(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = =       Controle de alunos       = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Alunos matriculados                                       ///\n");
    printf("///            2. Fichas de treino dos alunos                               ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

/////
// Funções

void telaEquipe(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Gestão de Academias = = = = =            ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto está sendo desenvolvido por:                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            Fágner Manoel dos Santos Silva                               ///\n");
    printf("///            E-mail: fagner.santos.706@ufrn.edu.br                        ///\n");
    printf("///            Redes sociais: @fagner07                                     ///\n");
    printf("///            Repositório: https://github.com/fagner07/SIG-Gym             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}