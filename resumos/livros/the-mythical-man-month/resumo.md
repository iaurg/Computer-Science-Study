# The Mythical Man Month

Lí este livro para entender melhor os processos de TI e como posso melhorar as entregas e qualidade dos softwares que participo, busco aperfeiçoar principalmente esses dois pontos para que consiga alcançar excelência.

Ouvi pela primeira vez sobre este livro no seguinte video, ele serve como um panorama do livro:

<iframe width="560" height="315"
src="https://www.youtube.com/embed/wcGGklDfHM4"
frameborder="0"
allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture"
allowfullscreen></iframe>

Abaixo as minhas anotações/resumo do livro que fiz durante a leitura:

## 1 - Poço de Alcatrão

O poço é onde acidentalmente quase todos iremos cair, projetos que estipulamos de uma forma mas que na realidade se tornaram uma imensa e profunda cascata de problemas grudentos, onde a cada movimento parece ficar pior e mais difícil.

A ilusão dos programadores de garagem: basicamente todos acabamos tendo uma visão de que podemos criar qualquer coisa em 2 semanas e será um programa útil e um produto eficaz, porém isso está bem longe de ser verdade. Um programa produto tende a demandar 3x mais recursos para sua construção, pois ele terá demandas não mensuradas nos "programas de garagem", coisas como testes, depuração, documentação… Se tornam algo essencial para um crescimento menos doloroso.

Um produto que atenda a um mercado, se comporte de maneira adequada em diversos cenários e tenha um crescimento contínuo será um desafio bem maior que apenas fazer alguns componentes funcionarem.

## 2 - O mítico homem mês

> Cozinhar bem leva tempo. Se fazemos você esperar é para servi-lo melhor e deixá-lo satisfeito.

A maioria dos projetos falham em sua implementação por motivos muitas vezes ligados a cinco fatores:

- Nossas estimativas normalmente são erradas e tendem a assumir que tudo ocorrerá bem.
- Essas mesmas estimativas confundem esforço com progresso, o que cria a falsa sensação de que homens e meses são intercambiáveis (9 mulheres não fazem um bebê nascer em 1 mês).
- Por faltar certeza nas estimativas deixamos escopos abertos e/ou mensuramos prazos sem sentido.
- A forma que metrificamos o progresso é totalmente vaga e disfuncional.
- E com identificação de atrasos a resposta natural é adicionar mais força de trabalho para a entrega, o que nem sempre é a equação correta.

> A primeira falsa premissa na construção de programas de computador é de que tudo irá bem, isto é, que cada tarefa tomará apenas o tempo que “deve” tomar.

Toda atividade criativa passa por pelo menos três estágios:

1 - A ideia: o momento onde tudo é possível e nada foi posto a prova do mundo real.

2 - A implementação: suas ideias serão postas a prova e precisarão se sustentar, a verdadeira criação está aqui

3 - A interação: quando alguém utiliza o seu programa e "toca” na sua ideia de forma concreta

### O homem mês

O custo varia de acordo com o número de pessoas envolvidas e a quantidade de meses. O progresso não. Usar a unidade homem-mês para medir o avanço de software é um erro perigoso e enganoso. Essa comparação de homem e meses é apenas válida para tarefas que podem ser realizadas sem a necessidade de comunicação entre as partes, como colher algodão, demolir uma casa, lavar um galpão…

Quando uma tarefa precisa de comunicação para ser desenvolvida, deve-se calcular o custo e esforço dessa comunicação como um novo fator de dificuldade.

É preciso pensar na comunicações entre pares e as inter-relações que podem surgir de alguma tarefa, tudo isso afetará o prazo final.

### Testes de sistema

Uma das partes mais negligenciadas e que afetam de forma direta o desenvolvimento de qualquer software são os testes. A falha em permitir e separar um tempo especifico para testes faz com que os problemas cresçam de forma descontrolada e só apareçam no fim do projeto, quando tudo já está sob pressão.

Uma fórmula que o autor apresenta para pensar durante o desenvolvimento de um software é a seguinte:

Em uma tarefa de 1 hora, deve-se investir:

1. Planejamento: (1/3) = 20 minutos
2. Codificação: (1/6) = 10 minutos
3. Testes de Componentes: (1/4) = 15 minutos
4. Teste do Sistema: (1/4) = 15 minutos

Com isso você terá tempo estipulado para todos os processos da programação, por termos a visão de que somos programadores, pensamos que devemos sempre estar mexendo com o código, mas essa é apenas uma parte do trabalho todo. É como se o cirurgião pensasse apenas em fazer a cirurgia, sem analisar o caso do paciente e sem lavar as mãos e equipamentos.

> A adição de recursos humanos a um projeto de software atrasado, irá atrasá-lo ainda mais.

## 3 - Equipe cirúrgica

Neste capítulo Brooks apresenta o conceito de equipe dividida em papéis claros, para que um projeto possa ser executado de maneira mais organizada, ao invés de ter responsabilidade indefinidas fazendo com que cada um corra para um lado, Brooks explica que o melhor é dividir os papéis claramente de cada integrante para que apenas um deles guie e os demais possam auxiliar de maneira eficaz, todos os papeis precisam ser executados de forma coerente.

Uma equipe pequena de programadores excelentes, sempre será a escolha de qualquer gerente, mas essa não é a realidade da maioria dos projetos e dificilmente uma equipe pequena conseguirá escalar a níveis de projetos imensos, por melhores e mais dedicadas que essas pessoas sejam.

## 4 - Aristocracia, democracia e o projeto de sistemas

A integridade conceitual de um sistema deve ser perpetuada por todos que participam dele, o sistema precisa ser arquitetado de uma forma que seja de simples entendimento para o seu objetivo final.

> Enquanto a arquitetura diz _o que_ acontece, a implementação diz _como_ irá acontecer.

Brooks afirma que a integridade conceitual de um sistema determina a sua facilidade de uso. Boas ideias e recursos que não se integram ao conceito básico do sistema devem ser postas de lado. Caso surjam muitas ideias importantes o sistema todo deve ser descartado e iniciado novamente com novos conceitos básicos.

Um sistema deve seguir um modelo aristocrático, onde poucas pessoas definem o que deve ser feito e protegem os conceitos iniciais do sistema. E isso não irá limitar ninguém, irá apenas definir uma ordem para o desenvolvimento do sistema, isso permite que arquitetos e implementadores trabalhem em conjunto.

## 5 - O efeito do segundo sistema

O arquiteto precisa ter o controle e consciência do sistema que está sendo construído para que ele não extrapole de forma acidental os limites de recursos e desenvolva algo além do solicitado ou que ficará totalmente obsoleto por fugir do conceito básico. Normalmente esse tipo de "overengineering” acontece no segundo sistema, pois o arquiteto já possui uma confiança inicial do primeiro sistema e tende a querer adicionar excessos nos próximos sistemas que projetar.

## 6 - Transmitindo a mensagem

Nesta sessão, Brooks apresenta como a comunicação e alinhamento de expectativas são importantes para o avanço de um projeto, reuniões e alinhamentos semanais para itens mais comuns, abertura total para consulta ao arquiteto e documentação de como tudo deve funcionar.

Documentar e manter o sistema no mesmo estado é quase impossível, mas deve haver um esforço para que ambos andem em conjunto.

Testes e validações finais comparando tanto manual para entender o que é esperado, como o teste simulando um usuário independente são importantes para uma entrega final concreta, o teste deve ser um advogado do diabo e entregar todos os pontos errados antes que o cliente identifique.

## 7 - Porque a Torre de Babel falhou?

Por mais que a Torre de Babel tivesse todos os recursos e tempo necessários para sua construção, ela ainda assim, falhou, porque? Pelo simples fato de que a comunicação foi totalmente eliminada, e sem comunicação não existe organização, dois fatores decisivos para a conclusão de um projeto.

Esses mesmo erros ainda se repetem em projetos atuais de software, cronograma desastroso, desvios de funções e erros no sistema. Todos surgem porque o lado esquerdo não sabe o que o direito está fazendo. Isso tudo cria um ruído descontrolado dentro do projeto que não é capaz de ser abafado e as pessoas começam a correr em direções opostas.

Faça com que sua equipe consiga se comunicar de todas as formas possíveis, deixe tudo o mais claro e documentado para que todos possam ter acesso a qualquer informação que for necessária internamente no projeto.

## 8 - Prevendo o lançamento

> A prática é o melhor dos instrutores

Calcular o tempo e esforço necessário para conclusão de uma tarefa em programação é muito mais complicado do que se parece, pois normalmente consideramos apenas a parte do código, que é onde o programador realmente aplica sua função esperada, mas considerar apenas esse fator com certeza direcionará suas estimativas ao erro.

Em algumas pesquisas Portman, com uma equipe experiente em projetos e estimativas percebeu que muitas das tarefas que eram documentadas levavam mais tempo para concluir que o esperado, como todo atraso era documentado, Portman conseguiu identificar que a grande maioria dos programadores estavam utilizando próximo de 50% de seu tempo programando e depurando, e muitas vezes o restante do tempo era dissolvido entre tarefas como reuniões, burocracias, trabalhos de alta prioridade não relacionado, doença, tempo de indisponibilidade da máquina, tempo pessoal… A estimativa tendia sempre a ser algo errado por trabalhar com variáveis não controláveis e previsíveis.

Da mesma forma diversos outros pesquisadores como Joel Aron e John Harr identificaram que o tempo previsto de programação e o tempo real de programação tendem a oscilar.

Um dado interessante de Corbató referente a linguagens de alto nível que tendem a ter uma taxa de produtividade elevada, em sua conclusão apresenta que:

- A produtividade na programação pode ser aumentada em até cinco vezes quando se utiliza uma linguagem de alto nível.

## 9 - Dez quilos em um saco de cinco

Todo programa de computador que é construído exige o consumo de hardware para seu funcionamento, e esse hardware pode tomar proporções de custo elevadas caso não seja controlado e monitorado de forma adequada. Como qualquer custo, o do espaço não é necessariamente ruim, mas não pode ser gasto com espaço desnecessário.

Controle seu programa e utilização de recursos para que seja condizente com o que seu programa deve executar e entregar ao cliente.

> O incentivo para uma atitude orientada ao usuário, visando ao sistema completo, pode muito bem ser a mais importante função do gerente de programação.

O gerente pode ajudar sua equipe a fazer boas escolhas em relação a espaço e tempo garantindo que o time seja treinado em técnicas de programação, não permitindo que confiem apenas em sua sabedoria natural e experiências anteriores.

> O programador que atinge o limite de sua sabedoria, em função da falta de espaço pode frequentemente fazer melhor, desvencilhando-se do seu código, dando um passo atrás e contemplando seus dados. A representação é a essência da programação.

## 10 - A hipótese dos documentos

A importância de se ter documentos, objetivos, metas e caminhos bem definidos para o avanço em um projeto de software. Normalmente no inicio de um projeto de software serão definidos alguns documentos base que serão o guia dos demais desenvolvimentos. Dessa forma o projeto precisa seguir respeitando os limites e metas propostas.

> As preocupações de um gerente devem ser sempre o quê, quanto, qual o preço, onde e quem.

O quê: objetivos. Definem a necessidade a ser atendida e as metas, os desejos, o limite e as prioridades.

O quê: especificação do produto. Começam como uma proposta e terminam como um manual e uma documentação interna.

Quando: cronograma.

Quanto: orçamento.

Onde: distribuição de espaço.

Quem: organograma.

A tarefa do gerente é desenvolver um plano e executá-lo. Mas apenas um plano escrito é preciso e comunicável. Tal plano consiste em documentos sobre o que, quando, quanto, onde e quem.

## 11 - Inclua em seus planos o verbo descartar

> Não há nada neste mundo que seja constante, a não ser a inconstância

A probabilidade de um sistema desenvolvido inicialmente ser descartado ou reconstruído em partes é alta, de uma forma ou outra isso vai ocorrer.

O problema é a pressão de sustentar um sistema que será descartado e o stress que será gerado com equipe e clientes, o sistema precisará “renascer", mas a que preço?

Brooks deixa claro que a mudança é um fator constante em softwares e precisa ser uma verdade aceita, o seu sistema precisa estar pronto para mudanças, sejam estruturais ou de negócio. Essas mudanças normalmente surgem de feedbacks de clientes reais e de melhorias que naturalmente o sistema precisa sofrer com seu tempo de vida, porém, é necessário que exista uma observação constante no que está sendo mudado para que seu produto “não perca o rumo”.

> O conceito de descartar é, em sí, apenas a aceitação do fato de que, uma vez que se aprende, muda-se o projeto

A documentação de um projeto é uma relutância natural devido ao medo de expor decisões, e abrir todas as suas percepções para críticas. Porém isto é necessário para a empresa e o projeto serem aptos a mudanças.

Outro fator que vai influenciar na maleabilidade de sua equipe e projeto é a capacidade de os membros dessa equipe conseguirem transitar tecnicamente. Tanto gerentes como programadores seniores precisam entender ambos os seus trabalhos, para que possam argumentar de forma coerente, e toda decisão tomada deve ser compartilhada com toda a equipe senior.

A manutenção de um software tende a ser uma atividade comum, todo projeto que é lançado tende a ter um nível de manutenção contínua. Estima-se que o custo de manutenção de um projeto tende a ser 40% ou mais do que seu custo de desenvolvimento, e a quantidade de manutenção tende a aumentar de acordo com o número de usuários, mais usuários encontram mais bugs.

> O problema fundamental com a manutenção de um programa é que a correção de um defeito tem uma chance considerável (20%-50%) de introduzir outro.

Normalmente um defeito que é corrigido só é testado no seu escopo local, e muitas vezes uma correção pode criar ramificações não obvias que criam novos problemas “escondidos”, e um fator que piora este caso é que frequentemente quem conserta não é quem escreveu o código, e sim um junior ou trainee.

Uma forma de tentar controlar e amenizar esses efeitos colaterais de correções é trabalhando com testes e documentações, porém ambos podem aumentar o custo do projeto, é necessário encontrar um equilíbrio que seja adequado para o projeto. A manutenção tem seu custo também, e normalmente o teste pode amenizar esse custo.

## 12 - Ferramentas Afiadas

Todo engenheiro terá o seu conjunto de ferramentas preferidas, e elas precisam estar alinhadas com as ferramentas e práticas que são utilizadas no projeto, é comum que algumas ferramentas entrem em conflito com as do projeto, e é papel do gerente equilibrar e estabelecer uma filosofia de ferramentas padrões sem impor ou atropelar os gostos pessoais, assim como, cada engenheiro precisa entender que certos ambientes exigem ferramentas diferentes, a adaptabilidade é o segredo.

O autor aponta duas ferramentas que deveriam ser amplamente utilizadas:

Linguagem de alto nível: que são linguagens mais simples de serem entendidas por humanos

Programação interativa: a possibilidade de você programar enquanto o programa está rodando, evitando compilações e depurações longas.

## 13 - O todo e as partes

“Sou capaz de escrever programas que controlam o tráfego aéreo, interceptam mísseis, reequilibram contas bancárias e gerenciam linhas de produção”. Para esse tipo de declaração, a resposta é a seguinte: “Eu também sou capaz, assim como qualquer homem, mas eles funcionarão quando você os escreve?”

Neste capítulo o autor questiona sobre a qualidade de software e como os bugs, testes e controles devem ser observados.

> A definição cuidadosa de funções e especificações, em conjunto com o exorcismo disciplinado de funcionalidades supérfluas e arroubos técnicos, reduz o número de bugs que terão que ser descobertos.

Planejar e organizar as ideias antes de programar pode ser uma ótima forma de aumentar sua eficiência, é difícil programar por horas a fio sem saber o que está buscando.

> A parte inesperadamente difícil da construção de sistema de programas é o seu teste.

O teste como uma ferramenta de controle de qualidade do código é uma das técnicas mais complicadas de serem introduzidas em um projeto pelo seu caráter contra intuitivo.

Sempre presuma que um sistema terá bugs, independente de quão bom programador você seja. É necessário estar muito atento e resistir a tentação de não escrever testes ou documentos de controle do seu programa.

Nota pessoal: Interessante como é possível ver nesse capítulo a evolução da interação entre o programador e a máquina, foram experimentadas várias formas de como depurar e testar programas sempre buscando uma eficiência maior. É legal observa o decorrer da história e de como chegamos até os dias atuais.

## 14 - Incubando uma catástrofe

> Como um projeto consegue atrasar um ano? … Dia após dia.

As estimativas e pontos de checagem de um projeto precisam ser revisadas constantemente para que se tenha uma noção de como está o andamento e qual será o prazo de entrega desse projeto ou grupo de demandas.

Os pontos de checagem e datas devem ser eventos concretos e mensuráveis, diferente do código eles precisam ter uma informação clara de quando serão analisados e considerados finalizados.

É comum um gerente observar a sua equipe atrasando alguma demanda e ele tentar aplicar soluções alternativas ao invés de informar o seu chefe, essas informações omitidas podem atrapalhar os pontos de checagem dependendo da forma como forem lidadas.

## 15 - A Outra Face

> O que não entendemos, não possuímos — Goethe

Um programa de computador é uma mensagem do homem para a máquina. Mas um programa uma vez escrito, tem outra face, aquela que conta sua história ao usuário humano.

Um programa precisa ser documentado e explicado para possíveis futuras pessoas que vão utilizar esse programa, podendo ser elas outros programadores, usuários finais ou parte da equipe, cada um terá uma abordagem e observação específica do sistema. O nível de explicação para cada um dos usuários será diferente e envolverá níveis de detalhamento específicos.

O autor indica uma forma de documentação inserida diretamente no código, chamado de auto documentação. Na documentação comum onde escrevemos o código em um local e documentamos em outro, o esforço necessário para troca de ambientes tende e fazer com que o projeto seja menos documentado, justamente pela necessidade de escrever toda a regra de negócio em um local separado.

A autodocumentação propõe escrever a documentação junto ao código, incrementando as instruções da linguagem com comentários e fluxos de texto que façam sentido no entendimento do leitor do código, evitando assim a necessidade de se ter um documento separado apenas para explicar o código.

Fluxogramas e gráficos de estrutura podem ser descartados a nível de detalhe, e tendem a ser mais úteis quando são mais genéricos e explicam apenas o contexto de alto nível do projeto, sem entrar em detalhes de codificação.

Entender o programa e validar que ele continuará tendo a sua função propagada pelo tempo é uma tarefa difícil e que exige um esforço extra para ser feito com qualidade, por isso vemos tantos programas sem documentação ou explicação lógica do que está acontecendo, é a entropia natural do código.

## 16 - Não existe bala de prata

Em muitos casos estaremos atolados em um problema que cresceu de forma descontrolada e quereremos uma solução rápida e direta, porém isto não existe no desenvolvimento de software. Os problemas de software são mais complexos e se entrelaçam de uma forma única em cada solução.

> Acredito que a parte mais difícil na construção de software é a especificação, o projeto e o teste de seu construto conceitual, não o trabalho de representá-lo e testar a fidelidade da representação

A complexidade de um software se dá pela quantidade absurdamente grande de estados possíveis dentro de um programa, combinado com todos os fatores externos. Isso faz com que a concepção, descrição e teste de um software sejam muito difíceis. Além do que, todos esses estados e elementos interagem entre sí, criando uma nova camada de complexidade.

> A contribuição mais poderosa de sistemas especialistas (chatgpt, copilot…) será, decerto, a de pôr a serviço do programador inexperiente a sabedoria e a experiência acumuladas pelo melhores programadores.

Por diversos pontos o autor prova que a bala de prata na construção de software pode não existir, seja em programas auxiliares ou em hardware otimizado, todos os casos a fração de ganho é quase ínfima quando comparado a melhoria trazida. Muito tentam trazer fórmulas ou novas técnicas, mas a atividade em si é inerente a dificuldade de ser construída, a especificação de um software é muito mais complexo do que se parece.

> A parte mais difícil da construção de um sistema de software é a decisão precisa sobre o que construir. Nenhuma outra parte do trabalho conceitual é tão difícil quanto estabelecer os requisitos técnicos detalhados, incluindo as interfaces para as pessoas, para máquinas e para outros sistemas de software. Nenhuma outra parte prejudica tão seriamente o sistema resultante se for feita de maneira errada. Nenhuma outra parte é mais difícil de corrigir depois.

Expandir sistemas tende a ser uma técnica mais eficiente na construção de software, tendo em vista que o crescimento incremental não apenas facilita a criação como incentiva os programadores a continuarem programando, ver uma fração do software pronta no “mundo real” serve de combustível para as etapas seguintes.

Nada pode superar um programador inspirado

## 17 - Não existe bala de prata, mais um tiro

Aqui o autor lista algumas refutações contra seu argumento referente a bala de prata e detalha as dificuldades de entendimento de termos e conceitos.

Lars Sødahl:

> Na minha experiência, muitas das complexidades que são encontradas no trabalho em sistemas são sintomas de problemas organizacionais. Tentar modelar essa realidade com programas igualmente complexos é, na realidade, preservar a desordem em vez de resolver problemas.

Diagramas tendem a ser complexos, e representar um programa normalmente exigirá um conjunto de vários diagramas, e ainda assim, não será possível detalhar todos os requisitos desse programa.

Brooks reforça que comprar softwares de “prateleira” prontos para serem utilizados pode ser uma decisão muito acertada, tendo em vista que empresas que vendem esses softwares vendem aos milhões e consequentemente qualidade e garantia é uma prioridade para eles, diferente de desenvolver o software personalizado internamente, onde o seu maior custo e preocupação será com o desenvolvimento em sí e não a qualidade.

Uma outra forma de conseguir um resultado similar a compra de software, é a reutilização de programas, quanto menos você precisar construir o seu software, melhor. O autor comenta sobre a dificuldade de se reutilizar código devido aos problemas de documentação e manutenção desse código, como o livro foi publicado em 1995 (nesta edição de aniversário) creio que o open source ainda estava no seu primórdio, e hoje conseguimos ver muito bem a reutilização de recursos através de pacotes/bibliotecas públicas mantidas por centenas de programadores.

> Então, em retrospectiva, o que Parnas e Brooks nos disseram? Que o desenvolvimento de software é algo conceitualmente difícil. Que as soluções mágicas não se encontram nas esquinas. Que é tempo para o praticante examinar as melhorias evolutivas em vez de esperar - ou desejar - por melhorias revolucionárias.

Alguns no campo do software, acha que esse é um cenário desestimulante. Eles são os que pensam que avanços estão ao alcance de suas mãos.

Mas alguns de nós - aqueles calejados o suficiente para pensar que somos realistas - encaram isso como uma lufada de ar fresco. Ao menos podemos nos focar em algo um pouco mais viável que a um bolo celestial. Agora, talvez, possamos prosseguir com os avanços incrementais possíveis para a produtividade no desenvolvimento de software em vez de ficar esperando avanços revolucionários que, provavelmente, não aparecerão.

## 18 - Proposições de O Mítico Homem-Mês

Neste capítulo o autor faz um comparativo da primeira versão do livro (1975) e as teorias apresentadas vs 20 anos depois, como o mercado de software estava em 1995.

A arte da programação fornece 5 tipos de alegrias:

- A satisfação de construir algo;
- A felicidade de se construir algo útil para os outros;
- O fascínio da montagem de objetos complexos, como em um quebra-cabeça com peças móveis que se interconectam;
- A alegria da aprendizagem constante, que vem da natureza não repetitiva da tarefa;
- A delícia de se trabalhar em um meio tão maleável - pura matéria de pensamento - que ainda assim existe, movimenta-se e funciona de uma maneira impossível para palavras simplesmente escritas;

E também alguns tipos de tristezas intrínsecas:

- O ajuste aos requisitos de perfeição é a parte mais difícil do aprendizado da programação;
- São os outros que definem os objetivos, e há a dependência de coisas (especialmente programas) impossíveis de controlar; a autoridade não é equivalente a responsabilidade;
- Isso parece pior do que é: a autoridade real é adquirida no exato momento da realização;
- Aliadas a qualquer atividade criativa estão também melancólicas horas de trabalho monótono e cansativo; programar não é exceção;
- O projeto de programação converge mais lentamente ao se aproximar do final, quando o esperado é que convirja mais rápido;
- Um determinado produto está sempre em risco de se tornar obsoleto antes de se tornar completo. O tigre real nunca é páreo para o de papel, a não ser que sua utilidade verdadeira seja desejada;

Promover uma atitude orientada ao usuário, visando ao sistema completo, pode muito bem ser a mais importante função do gerente de programação.

Inclua em seus planos o verbo descartar. Você terá que fazer isso de qualquer jeito.
