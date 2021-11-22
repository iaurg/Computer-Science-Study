# Clean Code

Ouvi muito sobre este livro e as ideias nele apresentadas, já iniciei a leitura porém irei reiniciar para poder sintetizar as informações com as minhas palavras e reter melhor o conhecimento.

## Clean Code

> Programar é como andar de bicicleta, por mais que você saiba todo o conceito de como funciona, sempre cairá na primeira vez que tentar.

Todos escrevemos um código ruim por algum motivo e deixamos para arrumar este código depois porque queremos entregar algo no tempo esperado, porém isso é contra intuitivo e não faz sentido a longo prazo, é uma mentira que contamos para nós mesmos.

Deixar para depois = nunca

Resolva o que precisa ser resolvido na hora.

O código mal escrito parece "rápido" no começo do desenvolvimento, pois todos entendem o contexto do que está sendo desenvolvido, porém conforme esta base de código começa a crescer os desenvolvedores começam a entrar em "buraco negro" de implementações falhas que para o projeto quase que por completo. Após muitas versões e horas de desenvolvimento no modo "louco" o código está tão sujo que é quase impossível limpá-lo.

Intuitivamente o projeto ficando mais devagar a gerência opta pelo obvio, contratar mais pessoas, porém está pode ser uma escolha equivocada pois a nova equipe precisará entender todo o projeto e este projeto já está bagunçado o que faz com que a nova equipe não entenda o que fazer e a equipe atual precise investir tempo explicando o projeto.

O que todos pensam? Redesign! Esta parece uma decisão correta afinal de contas o sistema atual esta inviável, mas é preciso ter muito cuidado ao escolher este caminho, pois com esta decisão tomada será necessário manter 2 sistemas, o antigo que precisa continuar atendendo as demandas e o novo até que ele possa substituir o antigo.

Não coloque a culpa da sua falta de profissionalismo em terceiros, você precisa saber o que é certo e o que precisa ser feito, e precisa dizer a verdade mesmo que ela não seja o cenário ideal esperado. Você é o profissional e deve saber as consequências de decisões erradas sendo tomadas a curto prazo.

Imagine você pedir para um cirurgião não lavar as mãos e não desinfectar os equipamentos para cumprir o prazo, isso não faz sentido, correto?

As vezes você pode se encontrar em um dilema:
"Preciso fazer um código ruim/rápido para conseguir cumprir o prazo", porém profissionais de longa data sabem que isso é contraintuitivo, justamente esse código mal feito fará com que você não consiga entregar a tempo o que precisa ser feito.

> Código limpo faz apenas uma coisa e bem feito

Um código mal feito tende a ficar cada vez pior, a cada vez que uma nova pessoa tenta modificá-lo. Algum similar a teoria da janela quebrada do Programador Pragmático.

> Código limpo é simples e direto, com um propósito apenas. Focado!

Faça um código que seja simples de ler e se empenhe enquanto escreve, você tende a ler muito mais do que escrever, então se dedique a ter uma escrita de qualidade para facilitar a sua leitura futura.

> Toda vez que passar por um código tente deixá-lo mais limpo, por mais que seja simples

## Meaningful Names

Crie nomes consisos e que condizam com o que cada valor ou função está tentando expressar. Evite qualquer tipo de abreviação sem sentido ou nomes que não sejam significativos.

Exemplo:

Nomes sem sentido e sem contexto

```c
static void copyChars(char a1[], char a2[]) {
  for (int i = 0; i < a1.length; i++)
  {
    a2[i] = a1[i];
  }
}
```

Nomes mais claros que indicam o propósito da função

```c
static void copyChars(char source[], char dest[]) {
  for (int i = 0; i < source.length; i++)
  {
    dest[i] = source[i];
  }
}
```

> A diferença entre um programador esperto e um programador profissional é que o profissional entende que clareza é o rei. Programadores profissionais usam suas poderes para bom e escrevem códigos que outros podem entender.
