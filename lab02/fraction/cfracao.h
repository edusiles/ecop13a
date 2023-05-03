#ifndef ID_CFRACAO
#define ID_CFRACAO

class CFracao {
   private:
     int m_numerador, m_denominador;
     CFracao Reduzida(void); // Torna fração irredutível
   public:
      // Construtores
      CFracao(void) {
         m_numerador = 1;
         m_denominador = 1;
      }

      // Construtor com parâmetros inline:
      CFracao(int num, int denom) : m_numerador(num), m_denominador(denom) { };

      // Construtor de cópia inline:
      CFracao(const CFracao& f) {
         m_numerador = f.m_numerador;
         m_denominador = f.m_denominador;
      }

      // Destrutor:
      ~CFracao(void) { };
      
      // Métodos de acesso:
      int getNumerador(void) { 
         return m_numerador;
      }

      int getDenominador(void) { 
         return m_denominador;
      }

      // Métodos aritméticos:
      // Retorna nova fração somada com _F:
      CFracao somar(CFracao _F);

      // Retorna nova fração subtraída _F:
      CFracao subtrair(CFracao _F);

      // Retorna nova fração produto com _F:
      CFracao multiplicar(CFracao _F);

      // Retorna nova fração quociente com _F:
      CFracao dividir(CFracao _F);

      // Métodos de comparação:
      // Retorna verdadeiro se menor que _Fracao:
      int menorQue(CFracao _Fracao);

      // Retorna verdadeiro se maior que _Fracao:
      int maiorQue(CFracao _Fracao);

      // Retorna verdadeiro se igual que _Fracao:
      int igual(CFracao _Fracao);

      // Métodos de conversão:
      // Retorna valor da função float:
      float comoFloat(void);

      // Métodos de impressão:
      // Mostrar no formato (numerador/denominador):
      void printFracao(void);
};

#endif