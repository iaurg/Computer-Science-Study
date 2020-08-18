# Programador Apaixonado

Comecei a leitura [deste livro](https://www.casadocodigo.com.br/products/livro-programador-apaixonado) e achei as ideias apresentadas muito interessantes. Apesar de o [Chad Fowler](http://chadfowler.com) ter feito a primeira publicação em 2009 diversos dos assuntos abordados são extremamente atuais e trazem um ótimo ensinamento para programadores que buscam construir uma carreira de qualidade. Irei resumir e interpretar o livro neste post, juntamente com respostas aos exercícios que forem aplicáveis.

## Liderar ou Sangrar

Sempre existe a dúvida de qual tecnologia escolher, ir entre as opções estáveis e bem estabelecidas no mercado ou apostar em tecnologias novas? Você cairá no clássico trade-off risco-recompensa.

Escolher algo estável no mercado será uma opção mais segura, porém a concorrência será maior, todos querem algo mais "tranquilo". Você pode facilmente encontrar trabalho mas não será algo tão lucrativo. Baixo risco. Baixa recompensa.

Em contra partida, escolher uma tecnologia nova é uma aposta, você pode iniciar os estudos em uma tecnologia que será lider de mercado em alguns anos ou investir seu tempo em algo que ficará "morto". Investir em uma tecnologia nova logo de inicio fará de você um líder em uma grande e influente tecnologia. Se o seu estudo da tecnologia escolhida for correto e ela decolar você será um profissional único entre poucos disponíveis. Alto risco. Alta recompensa.

![Curva de adoção de tecnologia](./images/Schematic-representation-of-technology-adoption-curves-and-adopter-groups-with-defining.png "Curva de adoção")

Contradizendo o gráfico acima, ainda existe uma posição no mercado chamada de "asilo da tecnologia" onde alguém deve migrar um sistema legado para uma nova tecnologia, assim este antigo sistema pode morrer em paz. O profissional responsável por esta migração com certeza será bem pago, pois a maioria dos profissionais que conhecem uma tecnologia antiga já migraram para novas ou se aposentaram. Mas ainda assim é arriscado, pois você será especialista em uma tecnologia que não existe.

Assim as duas pontas da curva de adoção se provam lucrativas.

Se quiser uma ajuda para analisar as tecnologias com promessas e as que estão "morrendo" acesse [este post](https://www.infoq.com/articles/programming-language-trends-2019/)

**Exercício** ✔️
Faça uma lista de tecnologias recentes, médias e antigas baseada no mercado atual. Mapeie-as em uma folha da esquerda para a direita. Na esquerda, coloque as tecnologias recentes, e na direita, as que estão próximas do fim. Force a si mesmo para encontrar a maior quantidade possível de tecnologias. Seja o mais granular possível sobre onde as tecnologias estão quando comparadas umas com as outras.

Quando você tiver mapeado o máximo de tecnologias que conseguiu se lembrar, marque as tecnologias nas quais você se considera forte. Então, talvez em uma cor diferente, marque aquelas sobre as quais você possui algum conhecimento, mas não domina. Onde está a maioria das tecnologias que você marcou? Elas estão aglomeradas em alguma ponta? Estão espalhadas? Elas estão próximas às pontas em que você se interessa?

Meu mapa:
![Mapa de tecnologias](./images/mapa-tecnologias.png "Mapa de tecnologias")

Verde: Domino a linguagem
Turquesa: Conheço e sei, mas sem dominio e sem uso no dia-a-dia.

Criei o mapa com base em pesquisas de gráficos e de "cabeça"

Analisando este gráfico vejo que a minha média está no meio, onde é uma zona de segurança, pois muitas empresas utilizam e o mercado é tranquilo. Meu interesse é em apostas altas, terei que iniciar um estudo em tecnologias mais novas e em ascensão.

Tendências de linguagens de programação em 2019:
![Tendências de linguagens de programação em 2019](./images/trends-de-2019.jpg "Tendências de linguagens de programação em 2019")

## Oferta e Demanda

![Gráfico de oferta e demanda](./images/oferta_demanda.png "Gráfico de oferta e demanda")

O grande equilibrio do mercado, se existem muitas pessoas querendo e poucas oferecendo o serviço, o preço é alto. Em oposto, se existem muitas pessoas oferecendo o serviço e pouca demanda, o preço é baixo.

Veja por exemplo a criação de um site em HTML, se você estava vendendo sites simples em 1991 com certeza conseguia um valor bem alto para uma simples página em HTML. Mas hoje, e 2020 o HTML puro é tão simples que vale quase nada, pode ser feito realmente de graça por construtores online. Afinal de contas muitas pessoas viram que um site em HTML podia render uma quantia considerável, assim muitos quiseram entrar nesse mercado, aumentou a quantidade de oferta e o preço caiu. Com o tempo profissionais que eram especiailista e dominavam HTML perderam seu valor no mercado, tendo que migrar para outras tecnologias, agregar seu conhecimento ou tentar competir no preço.

> Competir no preço sempre será difícil

Quando a maioria de nós pensa em oferta e demanda, achamos que tem a ver com o preço com que algo pode e será vendido. Se houver mais de um item à venda do que o número de pessoas querendo comprar aquele produto, então seu preço vai diminuir. Se houver mais pessoas querendo comprar o produto do que a quantidade de produtos disponíveis, o preço irá aumentar, de forma que os compradores concorram entre si.

E assim normalmente haverão mais compradores de um produto barato do que um mais caro.

Esse conceito é importante no desenvolvimento de software pois você pode estar em um ponto onde sua tecnologia de especialidade está sendo migrada para offshores, que são empresas aberta em locais onde a mão de obra é mais barata.

Empresas nesse estilo trabalham com tecnologias baratas e onde existe uma grande quantidade de mercado, injetando centenas de programadores a um custo muito baixo no mercado. Tecnologias de alto risco como visto no bloco anterior raramente são adotadas por empresas de offshore por serem arriscadas para eles.

Então durante a escolha de tecnologia é bom entender sobre esses assuntos, algumas tecnologias sempre estarão saturadas no mercado e terão uma curva de ascensão de lucro demorada.

Caso você seja um desenvolvedor Java ou PHP com certeza encontrará uma concorrência muito mais alta se comparado a um programador Python ou Rust. Porém se o mercado de Rust estivesse ganhando visibilidade e retornos mais altos as pessoas iriam se interessar por essa linguagem e oferecer seus serviços por um preço similar, o que resulta em concorrência, o que volta aos preços baixos e interesse das offshore.

A maior lição é: com aumento de demanda, vem o aumento da concorrência e consequentemente a baixa de preços. Se quiser um lucro maior busque mercados onde as offshores ainda não atuam, é arriscado, mas você precisa ser habilidoso e atento para se mover.

> Explore mercados não balanceados

Mercados que já estão balanceados possuem a demanda coberta, então serão menos "vorazes".

**Exercício**
Pesquise as habilidades que estão sendo requisitadas no mercado. Use sites de vagas e repositórios de empresas para encontrar as tecnologias e habilidades que estão em alta/baixa demanda.

Pesquise tecnologias que as empresas de offshore utilizam e compare com as tecnologias da sua pesquisa de mercado. Compare as tecnologias que você identificou uma boa demanda, porém as empresas de offshore não usam.

Quanto tempo levará para as empresas offshore oferecem serviços com essa tecnologia? Essa diferença é um mercado desbalanceado.

## Escrever código não é suficiente

Vá além do código, busque entender sobre a área do negócio que você atua. Dominar e entender as necessidades do projeto ou empresa que você está trabalhando será um grande diferencial.

Ao invés de simplesmente completar listas de tarefas, você pensará e terá base opinativa nas novas implementações com uma visão menos técnica e mais empreendedora.

Se esforce para expandir seu conhecimento de negócios e tente entender uma gama alta de negócios diferentes, esse ponto será um diferencial em sua carreira.

**Exercício** ⚔️
Regularmente converse com algum empresário e pergunte como funciona o negócio dele, como eles trabalham, quais são as dificuldade ou facilidades tecnológicas que possuem. Com essas informações de forma recorrente seu repertório e entendimento de negócios será expandido e você terá mais argumentos e bases para conversar com clientes.

## Seja o pior

Buscando ser "o pior" do ambiente em que você vive induzirá você a se adequar ao melhores do grupo, como uma osmose. Você precisa buscar sempre conviver seja pessoalmente ou online com pessoas que são melhores que você em algum aspecto.

> Seja o pior em qualquer grupo em que estiver

Por mais estranho que pareça você ficará mais inteligente e com códigos mais elegantes. Sendo o pior voluntariamente removerá o medo de errar e fará você

> As pessoas ao seu redor afetam a sua performance. Escolha bem seu grupo.

**Exercício**

Encontre uma situação para você ser o pior. Caso você não possa se dar ao luxo de mudar de empresa ou buscar equipes externas encontre um projeto para trabalhar como voluntário em que você possa trabalhar com desenvolvedores melhores que você, eles irão torná-lo melhor por osmose.

Ache uma comunidade, projeto open-source, meetup, desafio e participe ativamente.

## Invista em sua inteligência

Force-se a inserir você mesmo em ambientes hostis e mais exóticos quando estiver estudando ou programando por diversão, isso criará uma "armadura" concreta e um conhecimento além do comum. Dessa maneira você será um destaque em meio a tantos que buscam apenas comum e simples. Ame aprender coisas novas, busque diversidade.

Se você estiver interessado todos saberão que você aprende as coisas por autodesenvolvimento e melhor ainda por pura diversão, você mostrará ânimo e motivação perante sua profissão.

> Não lhe deram a oportunidade...? Faça a oportunidade!

Essa exposição voluntária a ambientes não tradicionasis lhe trará profundidade, conhecimento e criatividade.

**Exercício**
Aprenda uma linguagem de programação nova. Mas não mude para algo muito similar ao que você sabe hoje, busque uma linguagem que o faça pensar de forma diferente. Não precisa se tornar um especialista, apenas faça código para que você sinta a diferença da linguagem.

Peça para desenvolvedores mais experientes reverem seu código e fazerem sugestões.

## Não escute seus pais

Normalmente conselhos dados por pessoas próximas serão induzidos pelo medo e tendem a ideia de não perder. Mas o foco aqui é ganhar o máximo, mesmo correndo riscos. Pensar em não perder não é o caminho para ganhar! Ganhadores assumem riscos. Pense sobre onde você quer ir ao invés de onde as coisas estão. Planejamento de carreira baseado em medo o levará para um ponto que quase com certeza não será satisfatório. Seguro, mas não divertido.

Outra questão referente a carreira que está indo de encontro com o tradicional é a mudança de emprego frequente, porém na área de TI isso pode ser preferível. Como profissional de software o máximo de conhecimento e experiência em diversas áreas fará com que você amplie seu conhecimento e percepção em como construir programas.

Assuma riscos em sua carreira. Não deixe o medo o consumir. E se você não estiver se divertindo, você não vai ser excelente.

**Exercício** ✔️
Quais são os seus maiores medos com relação à sua carreira? Pense sobre as últimas decisões que você tomou. Faça uma lista de escolhas que fez e pense o quanto dessas decisões foram conduzidas pelo medo? Como você poderia reverter e tomar uma decisão com menos medo?

_R:_ Creio que uma das preocupações é em relação ao tempo, parece que não vai dar tempo de aprender tudo que quero. Mas sei que esta é uma ansiedade sem base pois a maestria de algo vem com a pratica deliberada, algo que me ajudou muito nessa questão foram os videos do Fabio Akita explorando a dimensão do tempo.

Poucas das minhas escolhas são tomadas com medo, existe uma incerteza por fatos externos que não podem ser controlados por mim, mas esse é um fator comum. As escolhas dos últimos anos é o foco em ser excelente, então venho melhorando pouco a pouco para alcançar o que busco.

## Seja generalista

O mundo de software é composto por mudanças rápidas, ágeis e flexiveis, então você também precisa se adaptar.

Para se tornar a pessoa que será lembrada você precisa ser capaz de resolver problemas. E quais são esses problemas? Exatamente, você não sabe. Nem ninguém.

Normalmente generalista são rotulados como pessoas que sabem de tudo mas não entendem de nada, visto como algo ruim. Mas quando você tiver um problema que precisa de solução rápida alguém que conhece de tudo um pouco pode ser muito mais eficiente, essa pessoa poderá resolver o erro, subir o servidor e ainda verificar o banco de dados para ver se está funcionando. O generalista pode tomar decisões de arquitetura, design e implementar a correção para o servido em produção rapidamente. Neste cenário a ideia de especialista parece bem antiquada.

Se você é apenas um "programador", ou um testador, ou um designer, você vai se encontrar ocioso ou fazendo trabalho pesado e sem importância. Se você é "apenas" um programador .NET você não vai ter muito a contribuir quando o foco de um projeto ou empresa mudar, mesmo que temporariamente, da sua área de foco. É sobre o quão útil você é.

> Generalistas são raros...e por isso, preciosos.

O caminho para se tornar generalista é não se rotular, seja flexível.

No mundo atual de evolução rápida um lider técnico que pode gerir pessoas mas também pode resolver um bug crítico de última hora terá muito mais valor. Tente evitar ser o programador bitolado que só fala com máquinas, as vezes é bom entender do negócio ou liderar, pode ser necessário. Profissionais que saem do comum são raros.

> Suas habilidades transcedem tecnologia.

Outro exemplo é em relação a plataforma, ser um amante do UNIX que se recusa a trabalhar no Windows é inviável. Seja neutro em relação as suas escolhas, todos temos preferências, mas em alguns momento devemos deixá-las de lado. Domine uma tecnologia e fique bom em outra. Suas habilidades devem transceder tecnologia ou plataforma. Lembre-se que são apenas ferramentas.

**Exercício**
Liste as dimensões em que você pode ou não estar generalizando seus conhecimentos e habilidades. Para cada dimensão escreva sua especialidade.

Assim que possível comece a aprender alguma tecnologia que você listou. Se possível pratique e aplique.

_Lista_
Linguagem de programação/JavaScript => Rust 🌱
Paradigma/Imperativo => Reativo, Procedural, funcional 🌱
Economia/Criptomoedas/ações => Commodities 🌱
Vendas e comunicação 🌱
Marketing de comunicação e conteúdo 🌱

## Seja especialista

Evite a falta de profundidade técnica.

> Muitos acreditam que ser especialista em algo significa que você não sabe outras coisas.

Ser especialista não é saber apenas uma coisa e desconhecer as outras. Seguindo essa lógica minha mãe seria especialista em Windows porque nunca usou Linux.

Infelizmente na área de software existem muitos especialistas rasos que usam o termo apenas como desculpa para saber só uma coisa. Especialista deve ser alguém com um profundo conhecimento técnico em uma área específica.

Seja um especialista que saiba resolver qualquer problema de implatação em sua linguagem ou que ao menos saiba a quem pedir ajuda se necessário.

Este é o tipo de especialista que a indústria precisa. Se você é um especialista em Ruby, isso não é uma desculpa para não saber nada além de Ruby. Isso significa, que se for relacionado a Ruby você é o cara. Clientes com problemas no servidor e ninguém sabe o porque? "Dê 30 minutos".

Espero que isso seja o que você considera um especialista, antes de rotular algum.

**Exercício** ✔️
Independente da sua linguagem como é que o código que você digitou passa de texto legível para as instruções que um computador executa? O que significa escrever seu próprio compilador? Quando você importa ou usa bibliotecas, de onde elas vêm? Como um compilador, sistema operacional ou máquina virtual liga vários pedaços de código para formar um sistema coerente? Aprender esses pontos fará com que você fique muito mais próximo de ser um especialista em sua linguagem.

Encontre uma oportunidade e dê uma aula sobre algum tema da tecnologia que você gostaria de se aprofundar. O ensino é uma das melhores maneiras de aprender.

_R:_
Coincidentemente as perguntas aqui casam com as aulas da [CS50](../../cs50)
1 - O computador executa apenas binário, então sempre haverá algum interpretador para "transformar" todo o texto legível em binário. O process desta transformação pode variar de acordo com cada linguagem. CÓDIGO -> INTERPRETADOR -> BINÁRIO (0010)
2 - Teoricamente você mesmo construirá o processo até se comunicar diretamente com o Hardware.
3 - Depende, normalmente vem de gerenciadores de bibliotecas (npm, yarn, github, gem...). Bibliotecas são códigos que alguma pessoa escreveu e você acopla em seu código. Tudo que estiver nessa biblioteca também fará parte de seu programa, por isso é bom prestar atenção em quais bibliotecas está utilizando.

Vou ensinar o [CS50](https://cs50.harvard.edu/x/2020/) como forma de revisão.

## Não coloque todos seus ovos em um só cesto

Cuidado ao construir sua carreira em volta de uma tecnologia específica, criada por uma empresa específica, da qual você não é empregado. E se a empresa acabar? E se sua tecnologia se tornar obsoleta? Porque você vai confiar sua carreira para um terceiro?

> Uma visão centrada apenas no fornecedor é uma visão míope

Evite tecnologias em que os detalhes de implementação são um segredo do fornecedor. Isso criará uma barreira entre você e a solução que é criada por um terceiro.

Por mais que o investimento em uma única tecnologia seja uma má ideia, se você quiser fazer isso, considere buscar uma opção open source, estude os detalhes de implementação. Quando você entender os detalhes a fundo verá que pode fazer muitas coisas por conta. Sua visão irá aumentar e a sua mente abrirá. Comece a entender os padrões e como tudo funciona. "Não importa o fornecedor, eu sei como criar um sistema!".

**Exercício**
Tente um projeto pequeno duas vezes. Uma em sua tecnologia padrão e outra na tecnologia concorrente.

## Ame-o ou deixe-o

Parece uma ideia manjada de livro barato, mas é um conceito importante. Se você quer ser excelente em seu trabalho, você tem que ser apaixonado por ele. Se você não dá a mínima para o que faz isso irá transparecer.

> Existem muitos para receber salários e poucos artistas apaixonados

Todos podemos dar um grande passo longe da mediocridade encontrando um trabalho pelo qual somos apaixonados.

**Exercício**
Vá encontrar um emprego que você é apaixonado

Mantenha um registro simples avaliando seu nível de empolgação de 1 a 10.1 significa que você preferia estar doente do que ir ao trabalho e 10 que você não consegue ficar na cama pois precisa finalizar sua próxima tarefa. Depois de duas semanas analise os resultados. Foi tudo baixo ou alto?

Para as próximas semanas toda manhã planeje como você fará o dia ser um 10. Cada dia registre o nivel de empolgação do dia anterior. Se ainda continuar com médias baixas talvez seja hora de pensar em mudança.

## Aprenda a pescar

Educação exige um professor e um estudante. Muitos de nós somos muitas vezes relutantes em ser um estudante.

> Não espere que lhe digam. Pergunte!

Evite ficar à merce de outras pessoas, seja independente ao máximo que conseguir. Por mais tenham outros profissionais em sua equipe, tente entender o que eles fazem e porque a função deles está interligada com a sua.

Comece a aprender as ferramentas de seu mercado. Tudo que faz parte de seu processo de desenvolvimento precisa ser entendido, nem que seja o mínimo. Evite ficar com "coisas mágicas" que funcionam e você nem sabe como ou porque. Entenda o mínimo para conseguir se virar, e o que tiver dúvidas e precisar, pergunte.

Aprenda pelo menos o básico de uma área que não é sua responsabilidade e já será um diferencial.

Vá aprender por conta!

**Exercício**
Como e porque? Sempre que estiver trabalhando ou estudando pense sobre as partes que você não entende por completo: como isso funciona? E por que isso tem que acontecer?

Você pode não saber responder, mas o simples fato de se questionar já o colocará em outro patamar.

Continue perguntando sobre como e porque até que tenha ido longe o suficiente.

Escolha uma das mais críticas porém negligenciadas ferramentas de seu ambiente e foque nela. Reserve um pequeno periodo de tempo todos os dias para aprender uma coisa nova sobre ela que vai lhe dar mais controle. Em momentos que a mente divaga ao invés de ir para o Facebook ou Twitter, você pode buscar por dicas de bash. Rapidamente você encontrará alguma coisa que não sabia e pode usar o truque do como e porque.

## Aprenda como os negócios realmente funcionam

Não subestime o conhecimento de domínios, certifique-se de investir o seu entendimento além da programação em outros assuntos. Obrigatoriamente saiba o básico de finanças, todos os negócios dependem de finanças.

> Você não pode criativamente ajudar em negócios sem saber como ele funciona

Entender como um negócio funciona lhe dará o "poder" da criatividade, entendendo os pontos que são essenciais farão com que você pense e programe funcionalidades melhores para toda a empresa. Para poder programar algo útil você precisa entender o problema e os porquês.

Conhecendo a empresa e o ramo de atuação você terá a capacidade de fazer mudanças significativas ao invés de coisas que são aparentemente corretas.

**Exercício** ✔️

1. Procure um livro básico sobre negócios, e trabalhe com ele.
2. Peça para alguém orientá-lo na área de finanças de sua empresa e explicar como funcionam as coisas.

_R:_ Já faço isso, como atuo em minha própria empresa entender de negócios e finanças é obrigatório, além de que utilizo este mesmo conhecimento para a vida pessoal fazendo controle de finanças e investimentos. Concordo com o autor do livro que este é um conhecimento descartado pela maioria e que o entendimento de negócios e economia em um geral pode lhe dar uma vantagem em diversos aspectos, sua visão vai além.

## Encontre um mentor

> É OK depender de alguém. Só tenha certeza que é a pessoa certa

Normalmente na área de TI a prática de mentoria é algo raro e visto como um ponto de fraqueza. Por mais que seja benéfico para todos.

Procure um mentor que seja um modelo a seguir.

Você precisa de novos níveis comparativos para ver que não é "tão bom" quanto você pensa e para que possa ter uma nova noção de realidade, assim você pode buscar um novo ponto de melhoria.

**Exercício**

1. Tutorie a si mesmo – todos nós queremos ter alguém para nos orientar, mas a realidade é que nem sempre vamos poder encontrar alguém a quem possamos dar esse papel. Eis um jeito de fazer uma automentoria.

Pense na pessoa de sua área que você mais admira. Muitos de nós já possuem uma pequena lista pronta, pegando de algum momento de nossas carreiras. Pode ser alguém com quem tenha trabalhado, ou pode ser alguém cujo trabalho é admirado. Liste os dez atributos mais importantes desse modelo a seguir. Escolha os atributos que são a razão de você tê-lo escolhido para esse papel. Tais atributos podem ser de áreas específicas de habilidade, como amplitude de tecnologia, ou a profundidade de conhecimento sobre algum domínio. Ou, eles podem ter características mais pessoais, como a habilidade de deixar os membros da equipe tranquilos, ou a de ser um palestrante envolvente.

Agora, ranqueie essas qualidades em ordem de importância, sendo que 1 é o menos importante e 10, o mais importante. Você acabou de criar e destilar uma lista de atributos que você acha admiráveis e importantes. Esses são os caminhos nos quais você deve se empenhar para emular o modelo escolhido. Mas como escolher em qual focar primeiro?

Adicione uma coluna à lista, e para cada item na lista, imagine como seu modelo iria avaliar você em uma escala de 1 a 10 (10 sendo o melhor). Tente realmente se colocar na mente de seu modelo e observar a si mesmo como se fosse uma terceira pessoa.

Quando você tem os atributos, o ranking, e suas próprias avaliações, em uma coluna final, subtraia sua classificação em cada fileira do nível de importância que você deu à coluna anterior. Se você ranqueou algo como 10 para o atributo mais importante de seu modelo, e sua própria avaliação foi 3, isso lhe dá uma prioridade final de valor 7. Tendo preenchido esta coluna completamente, separando em ordem descendente, você terá uma lista das 10 áreas priorizadas em que você deve melhorar.

Comece com os primeiros dois ou três itens, e formule uma lista de tarefas concretas que você pode começar a fazer agora para melhorar a si mesmo.

## Seja um mentor

Se você quer realmente aprender alguma coisa, tente ensiná-la para outra pessoa. (Learn in Public)

> Para descobrir se você realmente sabe algo, tente ensinar para outra pessoa

Quando ensinamos alguém nós limpamos os cantos sujos de nosso conhecimento que raramente são expostos.

Você não precisa ser um especialista para ensinar, com certeza existe algo que você sabe/entende que pode de fato ajudar alguém com dificuldades. Encontre esse algo e comece a ser prestativo.

Apenas comece a ajudar as pessoas.

**Exercício**
1 - Encontre alguém para ajudar. Ofereça-se como voluntário para facilitar o caminho dessa pessoa.

2 - Encontre um fórum/servidor online e comece a ajudar respondendo dúvidas.Torne-se conhecido pela sua habilidade e paciência em ajudar as pessoas

## Pratique, pratique, pratique

Quando você pratica/estuda programação deve ser difícil, não deve ser algo simples. Se seus códigos estão sempre impecáveis e sem dificuldade alguma no processo quer dizer que você não está estendendo seus limites. A prática serve para isso.

Pratique e erre nos bastidores para que possa atuar excelentemente em público.

Você consegue imaginar um músico subindo no palco sem ensaiar?

Invista tempo em sua profissão!

> Pratique nos seus limites

Você deve reservar um momento para praticar. É sua responsabilidade.

**Exercício**

TopCoder: Site para competir

Code Kata: Site para praticar código

## O jeito que você faz

Normalmente metodologias são tratadas com um certo preconceito e impostas através de uma hierarquia, isso faz com que toda uma área de conhecimento seja negligenciada. Para de aceitar processos ineficientes e jargões desnecessários, se você pensa que deve existir uma maneira melhor de desenvolver software, talvez exista mesmo. Se aprofunde e mude.

Para um processo funcionar ele precisa ser compreendido por todas as pessoas que irão utilizá-lo.

**Exercício**

1 - Escolha uma metodologia de desenvolvimento de software, e escolha um livro, comece a ler sites e inscreva-se em uma lista de e-mails. Analise a metodologia e aponte o que acha positivo e negativo.

## Nos ombros dos gigantes

Estudar a obra os mestres é uma parte essencial para se tornar um mestre

> Minere códigos existentes para ter insights

> Use códigos existentes para refletir sobre suas próprias capacidades

Leia códigos de desenvolvedores excelentes para se situar e ver em qual nível você se encontra, pode ser humilhante, mas com certeza trará um grande benefício com ideias e código que você jamais teria imaginado.

Se aproveite do mundo open source para entender e se aprofundar em softwares por completo.

**Exercicio**
1 - Escolha um projeto e o leia como um livro. Faça anotações. Esboce as coisas boas e ruins. Escreva uma crítica e publique

2 - Encontre um grupo de pessoas que pense como você e se reuna para estudar códigos de 2 a 200 linhas. Quebre o código e discuta o que está sendo utilizado.

## Automatize-se em um emprego

Pare de tentar competir em quantidade de programadores offshore.

Automatize processos para que você possa ter um fluxo de trabalho melhorado e possa comprovar a eficácia de um programador excelente. Pense em automatizar o fluxo da empresa e negócio.

> Não importa o qual nova ou legal uma tecnologia seja, ela só terá valor se resolver um problema real

**Exercício**
1 - Escolha uma tarefa que você faz de forma repetitiva e escreva um gerador de código para ela. Não se preocupe com reusabilidade. Apenas garanta que seu gerador economize tempo. Pense em uma maneira de aumentar o nivel de abstração do que você está gerando.
2 - Pesquise por model-driven architecture (MDA). Experimente algumas das ferramentas disponíveis. Procure alguma lugar do seu trabalho no qual aplicar alguns conceitos MDA, ou talvez o grupo completo de ferramentas. Pense em aplicar os conceitos de MDA apenas com as ferramentas que você utiliza todo dia.

## Agora Mesmo

O trabalho irá se expandir pelo tempo disponível para a conclusão.

Um senso de urgência mesmo que fictício é o suficiente para facilmente dobrar ou triplicar sua produtividade.

Trate seus projetos como corrida e você chegará ao final muito mais rápido do que se você tratá-los como uma cela de prisão. Crie movimento. Seja aquele que empurra, não fique confortável demais.

**Exercício**
Olhe para sua escrivaninha. Examine as tarefas que estão lá por um longo tempo, os projetos que estão começando a tomar forma, ou aqueles em que você está um pouco travado -- talvez por questões burotcráticas, talvez travados por conta de alguma análise.
Encontre um que você poderia fazer nas horas livres do seu trabalho normal, quando você estaria provavelmente navegando pela internet, checando e-mails ou tendo um almoço por mais de uma hora. Transforme um projeto de meses em uma tarefa de menos de uma semana

## Leitor de mentes

Preste atenção nos detalhes e conversas. Implemente funcionalidades que são frequentemente comentadas. Se forem baratas e rápidas faça-as antes de serem solicitadas.

> O truque da leitura de mente, se feito certo, faz as pessoas dependerem de você.

Se você conseguir identificar funcionalidades que seus clientes querem mas ainda não pediram e desenvolver, você irá encantá-los.

Cuidado com os riscos da leitura de mentes:
Comece pequeno, faça suposições de itens que podem ser encaixados nas frestas de seu trabalho normal, sem muito custo para a empresa.

Evite este truque caso a mudança altere o caminho arquitetônico do sistema ou limite de alguma forma o que ele pode fazer.

**Exercicio**
Comece a tomar nota de funcionalidades que você acha que os usuários e gestores irão pedir. Seja criativo. Tente ver o sistema a partir do ponto de vista deles. Depois de ter uma lista de funcionalidades não tão obvias, pense sobre como você poderia implementá-las de forma mais eficiente. Pense sobre os casos limites que seus clientes podem não ter em mente imediatamente.

Conforme você recebe solicitações de melhoria, acompanhe sua taxa de acerto. Quantas das suas suposições tornaram-se funcionalidades que realmente foram requisitadas? Quando suas suposições vieram à tona, você foi capaz de usar as ideias que vieram em sua sessão de brainstorm?

## Êxito diário

Melhore sua habilidade de expor quando excede as expectativas

> Tenha uma realização para relatar todo dia

Acompanhar seus êxitos com frequência irá assegurar que você não fique travado: se você deve alcançar um êxito por dia, não pode ficar elaborando a tarefa perfeita durante duas semanas.

**Exercício**
Separe meia hora e sente-se em um local calmo para pensar sobre os pequenos problemas diários de sua equipe. Anote-os. O que gasta tempo de sua equipe diariamente e que poderia ser melhorado?

O que vocês estão fazendo manualmente que poderia ser feito de forma automática? Há algo que você pode limpar? Pode fazer redução de falhas?

Reserve 20 minutos e escreva todas as ideais boas e ruins, separe cinco itens mais irritantes e faça 1 por dia durante a semana.

## Lembre-se de para quem você trabalha

Resolva e busque fazer parte de problemas que estão próximos a você, caso a hierarquia de sua empresa seja muito profunda. Fazendo uma pequena parte você contribui para impactar diversos níveis da empresa.

> O sucesso de seu chege é o seu sucesso

Alinhe-se com as necessidades do negócio e alinhe o negócio com suas necessidades. Se for dominar a sua função isso irá assegurá-lo de fazer as coisas certas

**Exercicio**
Faça uma reunião com sua equipe e entenda as metas e objetivos a serem alcançados. Pergunte como você pode fazer a diferença. Priorize o trabalho com base nessas metas.

## Esteja onde você está

Pare de pensar e agir com base na sua próxima promoção, faça a sa função atual de forma excelente e o próximo degrau da escada será automático.

> Seja ambicioso, mas não demonstre

Foque-se e invista no seu presente, por mais que o futuro seja importante. A sua dedicação no presente será refletida no futuro sem ao menos você perceber.

**Exercício**
Coloqueas metas de sua carreira de lado por uma semana. Escreva seus objetivos para seu emprego atual. Em vez de pensar sobre aonde você quer ir em seguida, pense sobre o que você quer ter alcançado quando você terminar o trabalho no qual está agora. O que você pode ter produzido nesse emprego que terá sido ótimo? Crie um plano que seja ambos estratégico e tático. Passe a semna implementando essas táticas em apoio às metas a longo prazo de "terminar" esse trabalho.

Quanto tempo vai passar até que você conquiste tudo o que sente que precisa em sua função atual? Como você saberá que terá concluído? Planeje a próxima semana e repita.

## Quão bom eu posso fazer um trabalho hoje?

Existem momentos específicos em que nossa habilidades chegam ao máximo e extrapolam os níveis de execução. Porque quando o prazo está atrasadou ou um erro inesperado ocorre em produção o nosso modo de desenvolver extrapola o normal e conseguimos resultados rápidos e eficientes?

O que poderiamos fazer se conseguissemos esse nível de interesse e foco em todas as atividades cotidianas?

> Quãos mais divertido você pode tornar seu trabalho?

Provavelmente as tarefas "chatas" são chatas por dois motivos:
1 - Elas não ativam a nossa criatividade
2 - Elas não são desafiadoras

Acabam sendo vistas apenas como deveres a serem concluidos que você facilmente passaria para outra pessoa se fosse possível.

Para "converter" tarefas chatas em algo interessante tente fazer essas tarefas de maneira perfeita.

Identifique a tarefa em questão e procure a melhor e mais correta forma de fazê-la, isso com certeza acrescentará dificuldade e consequentemente um desafio.

**Exercicio**
Torne isso visível. Registre as tarefas chatas e crie competições para que elas possam ser finalizadas, com acompanhamento e rankings. Essa visualização impulsionará o seu lado competitivo e transformará a sua visão desta tarefa.

## Quanto você vale?

Analise quanto você custa para sua empresa e qual é o retorno que você traz para valer a pena o investimento em você (seu salário). Toda empresa precisa de um retorno desse investimento feito no profissional, e saber, ou pelo menos se interessar por quanto você traz de retorno à sua empresa fará com que você pense de maneira diferente. Ao invés de pensar em aumento de salário como um "direito" veja se você vale o investimento a mais. Você trabalha para um negócio, e ao menos que você forneça algum tipo de valor real, você é um desperdício de dinheiro.

Quanto você acha que precisa entregar para ser considerado um investimento de valor à empresa?

> Pergunte-se: "Fui valioso hoje?"

Busque formas criativas de economizar dinheiro da empresa. Procure formas de otimizar a equipe de software. Pense nos usuários finais e como eles podem ser impactados.

Lembre-se de que você precisa trazer um valor real para a sua empresa e isso fará de você um profissional indispensável.

**Exercicio**

A maioria das empresas possui um nível de taxa de retorno, com o qual eles calculam se um investimento vale a pena. Este número é chamado de taxa mínima. Descubra a taxa mínima de sua empresa e aplique isso ao seu salário. Você é um bom investimento?

## Uma pedrinha em um balde d'água

Desça de seu pedastal e pare de achar que você é insubstituível. Se você for embora da empresa em que atua terá o mesmo impacto caso qualquer outro colega seu saia, quase 0.

Pense que cada dia pode ser o seu último dia e tenha a humildade para reconhecer e estar atento a tudo que você faz.

Quanto mais arrogante você for em relação ao que faz, maiores as probabilidades de você desenvolver pontos cegos e deixar coisas importantes passarem.

Você sempre fez de um jeito X, sempre deu certo, acha que é a melhor forma e deixa de procurar novas possibilidades que podem funcionar melhor.

> Tenha cuidado para não se cegar com o próprio sucesso

Quanto mais insubstituível você pensa que é, mais substituível você é (e você se torna menos desejável)

Querer ser insubstituivel criará um ambiente hostil e não vantajoso para você. Poucos desenvolvedores de software são gênios realmente inigualáveis.

**Exercício**
Faça um inventário de todas as coisas que você faz e liste os itens em que sua equipe é totalmente dependente de você. Pegue todos esses itens e adicione em sua lista de tarefas para que sejam documentados, refatorados ou automatizados para que qualquer um consiga entender/fazer. Deixe este material acessível para qualquer um da equipe e repita o processo frequentemente.

## Aprenda a amar manutenção

Todos querem iniciar novos projetos e quase ninguém deseja dar manutenção em legados. É uma percepção que dá para entender, afinal manutenção não parece nada glamuroso, você pega um sistema cheio que janelas quebradas e com nós que você precisará de muito esforço para ajustar caso estejam errados. Criar algo novo parece ser mais libertador e "correto" pois você está definindo tudo e criando.

Porém, quando algo novo está sendo criado existe muito mais expectativa por parte do solicitante e as regras/revisões tendem a ser mais rigorosas, tendo em vista que estão investindo tudo neste novo sistema.

O ambiente da manutenção você precisa se preocupar em: O sistema funcionar e ajustar erros com o mínimo de custo. Fora isso você é livre para refatorar, implementar, verificar gargalos, estruturas, testes...Desde que atenda ao foco principal os demais detalhes serão vistos como melhorias bem vindas.

> Manutenção pode ser um lugar de liberdade e criatividade

Todo sistema se torna um legado após a primeira linha de código, tudo que vem depois é manutenção. Aprenda a amar este ponto e você terá um ótimo caminho pela frente.

**Exercício**
Meça, melhore, meça: Para a aplicação ou código mais crítico que você mantem, faça uma lista de fatores mensuráveis que representam qualidade da aplicação. Escolha os atributos mensuráveis mais importantes e comece a medí-los.

Depois que você tiver uma boa base, estabeleça um objetivo e melhore a performance de sua aplicação ou função.

Repita o processo para tudo que encontrar e veja como é viciante mensurar e executar.

## Maratona de oito horas

Devemos trabalhar horas suficientes para que sejamos produtivos. Trabalhar cansado será contra produtivo pois quando estamos cansados tendemos a cometer mais erros.

A idéia das oito horas é que você trabalhe com tanto afinco que seja impossível trabalhar mais que esses tempo.

Com menos horas e tempo limitado cada hora será única e você dará valor para cada tempo investido no trabalho.

Trabalhe menos e você realizará mais. Faça um orçamento cuidadoso das horas que você investe em trabalho.

> Projetos são maratonas, não corridas de velocidade

**Exercício**
Certifique-se de que você durma bem hoje. Amanhã, tome café da manhã e, então, comece a trabalhar em um horário exato (de preferência, um pouco mais cedo que o usual). Trabalhe intensamente por quatro horas. Tire uma hora de almoço. Então, trabalha por mais quatro horas tão intensamenet que você fique exausto e não consiga fazer mais. Vá para casa, relaxe e divirta-se

## Aprenda a falhar

Quanto antes descobrir suas falhas mais robusto seu software tende a ficar. Por mais que algumas práticas de identificação de erros mostrem suas falhas, deixe seu ego de lado e busque melhorar. A qualidade de seu software agradece.

O pior dos erros é aquele que você não sabe que está comentendo. Se você nunca andou em um campo minado antes, você pode não saber onde _não_ pisar. Todos cometem erros, porém o amador não sabe o que fazer quando erra e o profissional se adapta e corrige o erro com maestria.

Erros podem ser cometidos tanto no ambito de programação como em outros pontos de atuação como comunicação, venda, design...

Alguns pontos que fazem a diferença:

- Errou? Assuma logo e ajude/busque como arrumar. Em software quanto antes descobrir o erro melhor.
- Se foi você quem errou, leve a culpa e assuma a responsabilidade. O problema precisa ser resolvido, se estiverem buscando um culpado estão perdendo tempo de resolução.
- Oferaça uma solução. Se não possui uma, tente ajudar da maneira que for possível.
- Peça ajuda. Mate ego e orgulho de uma vez por todas, ajude sua equipe a encontrar a saída.

> Momentos de estresse oferecem as melhores oportunidades de construir fidelidade

Você precisará tratar e administrar um erro alguma vez na vida, quando chegar este momento a sua posição será um diferencial, e caso seja um contato direto com cliente este posicionamento poderá construir fidelidade.

## Diga "Não"

O jeito mais fácil de não cumprir com seus compromissos é se comprometer com o que você sabe que não conseguirá cumprir.

Tenha coragem o suficiente para ser honesto

**Exercicio**
Faça uma lista com tudo que você se comprometeu:

- O que foi pedido com uma data limite?
- Com o que você se comprometeu?
- Se você está atrasado, registre tanto o que você fez e o que lhe pediram para fazer.
- Registre quando você cumpriu o dever

Examine diariamente. Comunique quando você falhará assim que você perceber. Examine mensalmente -- Qual a média de sucesso? Com qual frequência você está correto?

## Não entre em pânico

Tente entender todo o contexto e evite entrar em pânico por mais difícil que seja a situação. Esteja ciente de seu contexto atual para que se adeque ao todo.

Normalmente entramos em pânico porque perdemos as expectativas. Quando algo dá errado tendemos a focar todas as nossas atenções para o problema, não que seja totalmente ruim, porém com o estresse no máximo e o problema aumentando os nossos cérebros tendem a "desligar".

Quando entrar em pânico pare e tente visualizar a situação em terceira pessoa, tente ajudar você mesmo, analise as mensagens de erro, tente entender a situação fora do problema para que você possa ampliar seu campo de visão.

**Exercicio**
Mantenha um diário do pânico e anote nele todas as situações que você se sente/sentiu em pânico. Com esse relatório você poderá reanalisar a situação no modo offline e tentar ver outras formas de abordar.

Faça as perguntas para cada situação:

- Valeu a pena o pânico?
- Qual teria sido a melhor reação para a situação?
- O que um herói ou alguem que você admira teria feito nessa situação?

Depois de um tempo esta análise começará a acontecer em tempo real conforme o pânico aparece.

## Diga, faça, mostre

O jeito mais fácil de nunca ter algo pronto é nunca se comprometer com nada. Se você não tem um prazo, não há uma pressão ou incentivo suficiente para concluir algo. Isso ainda é mais verdadeiro quando esse **algo** que deve ser feito não é 100% excitante.

Metrifique a acompanhe as tarefas que você executa. Seu planejamento será um diferencial para você.

Criar e executar planos demonstra que você não é apenas um robô que digita códigos, mas que você é um lider.

Copie códigos bons até você assimilar eles dentro de você. Copie mesmo, descaradamente e vá treinando e absorvendo padrões.

Falhe e copie repetidamente.

## Percepções e perssepisões

Mostre sua evolução para que você seja percebido.

Faça com que os outros percebam o seu valor. Normalmente isso pode ser equilibrado com comunicação. Para seu chefe não importa muito como você faz o código, ele normalmente busca outros fatores, perceba e apresente-os. Controle as percepções que as outras pessoas tem de você. Você não vai impressionar seus clientes com suas habilidades de programção orientada a objetos.

**Exercicio**

1. Percepções são conduzidas por diferentes fatores, dependendo de qual público alvo. Sua mãe não se importa muito sobre o quão bem você consegue programar, mas seus colegas de equipe sim.

Entender o que é importante em cada relacionamento é uma parte crucial para formar percepções verossímeis naqueles com quem você interage. Pense nos diferentes tipos de relacionamento que você geralmente tem com as pessoas do escritório. Por exemplo, você provavelmente tem colegas que fazem o mesmo tipo de serviço que você. Você também provavelmente tem um chefe direto, e talvez você tenha um ou mais clientes e um gerente.

Pegue esses grupos diferentes e os liste. Próximo a cada um, escreva quais dos seus atributos mais provavelmente vão conduzir a percepção daquele grupo sobre você. Aqui está um exemplo:

| Grupo             | Condutores de percepeção                                                                               |
| ----------------- | ------------------------------------------------------------------------------------------------------ |
| Colegas de equipe | Habilidades técnicas, sociais e trabalho em equipe                                                     |
| Chefe             | Espírito de liderança, foco no cliente, habilidades de comunicação, acompanhamento, trabalho em equipe |
| Clientes          | Foco no cliente, habilidades de comunicação, acompanhamento                                            |
| Gerente           | Habilidades de comunicação, acompanhamento, produtividade, habilidades técnicas                        |

Pense sobre sua lista. Como você poderia mudar seu comportamento com o resultado dessa lista? O que você já vem ajustando conforme interage com cada grupo? O que você não tem ajustado em seu comportamento?

## Guia de aventura

Foi-se os dias do hacker trancado em uma sala secreta com sua tela verde. Uma habilidade muito importante é a comunicação. Com certeza a comunicação será um fator decisivo para escolher um programador, pois quem escolhe precisa decifrar o que está sendo feito, e com certeza saber os melhores patterns não serão decisivos nesse momento.

Clientes e gerentes tem medo de você! E com uma boa razão. Você é esperto. Você fala uma linguagem oculta que eles não entendem. Você os faz sentir estúpidos com seus comentários sarcásticos (mesmo quando não tem intenção). E seu trabalho é frequentemente o último e mais importante pedágio entre a concepção de um projeto e seu nascimento.

Para de achar que quem não entende de "computadores" não é inteligente, assim como você entende de sua área seu cliente entende da dele. Pode ser um preconceito arraigado em você, e você sabe que sente isso.

Reverta o relacionamento. Ao invés de se achar um gênio da computação, vire a mesa e assuma que seu cliente é um especialista no ramo dele com o qual você precisa aprender para fazer o seu trabalho.

**Exercicio**

1 - Olhe para sí mesmo: Você é aquele programador ogro e mau humorado que todo mundo teme? Você tem certeza? Eles tem medo de lhe dizer?

Analise os e-mails que você já enviou para clientes, gerentes ou colegas e coloque-se no lugar deles. Como você se sente? Veja as coisas do ponto de vista deles.

2 - Pule a cerca: Encontre uma oportunidade para ser jogado em uma situação em que você _não_ é especialista e, portanto, depende daqueles que são.

Imagine-se em um time de pessoas profissionais na área dela em que você foi introduzido como iniciante. Como você gostaria de ser tratado por seus colegas?

## Eu iscrevu mto beim

Chega de programado ogro monossilábico. É necessário ter uma comunicação direta e de qualidade com os profissionais de tecnologia.

Atente-se a suas habilidades de escrita e esteja ciente de que elas fazem diferença em sua carreira.

> Se você não consegue organizar seus pensamentos em sua língua materna de modo que os outros entendam, como podemos esperar que você consiga fazer isso em uma linguagem de programação?

Você é o que você consegue explicar.

**Exercicio**
1 - Comece um diário de desenvolvimento. Escreva um pouco em cada dia, explicando em que você tem trabalhado, justificando suas decisões de programação e examinando difíceis decisões técnicas e profissionais. Mesmo que você seja seu único público (depende de você), preste atenção na qualidade de sua escrita e em sua habilidade de se expressar claramente. Ocasionalmente, releia registros antigos e os critique. Ajuste seus novos registros com base no que gostou ou não nos anteriores.

2 - Aprenda a digitar. Faça um curso e treine datilografia.

## Estar presente

Relacionamento pessoal fortalece os laços profissionais e de amizades entre as pessoas e facilita a comunicação. Nós "humanos" ainda não estamos acostumados naturalmente com a comunicação a distância, por mais incômodo que isso possa ser para nós geeks.

Programar trancado em um quarto sem falar com ninguém não é a melhor opção para sua carreira.

Tente aprender de verdade sobre as pessoas com quem você trabalha.

**Exercicio**
1- Na próxima semana, pegue um dia para se forçar (com razão) a não mandar nenhum e-mail. Toda vez em que você iria fazer isso telefone para a pessoa, ou se possível vá até o escritório dela e converse pessoalmente.

2- Faça uma lista de colegas, chefes e clientes com quem você não conversa o suficiente. Coloque compromissos recorrentes em sua agenda para ligar e falar com eles. Estabeleça um contato humano

## Fale com propriedade

Entenda o que a pessoa que você está conversando quer ouvir. Falar a quantidade de memória ou velocidade do servidor pode não ser tão interessante para um setor de vendas, mas informar quantos processos é capaz de automatizar com esses recursos pode ser um ótimo assunto.

> Comunique-se na linguagem de seu negócio

Entenda o porque das tarefas que você executa, quais são os beneficios reais para o negócio. Ou você apenas marca checklists sem dar palpite?

**Exercicio**

1 - Faça uma lista das suas últimas realizações. Escreva o benefício de negócio para cada uma. Se há conquistas para as quais você não consegue escrever um beneficio, pergunte ao seu chefe ou um conhecido confiável como eles enquadrariam o benefício

2 - Faça seu discurso de elevador e decore-o. Esteja sempre pronto para informar os benefícios que suas ações trazem para o negócio.

## Mude o mundo

Nada pior do que seus colegas não saberem o que você faz, se você quer ser apenas alguem que cumpre tarefas ou um programador offshore tudo bem, mas se pretende chegar a níveis altos precisa realizar mudança impactantes que os outros sintam e saibam o porque você está lá. Você precisa ir ao trabalho com uma missão.

Se você sabe que algo poderia ser melhor vá e diga, mostre como. Sabe uma forma de fazer sistemas melhores e mais em conta? Mostre para todos.

**Exercicio**

1 - Liste o que você já testemunhou em seu trabalho. Pense nas pessoas determinadas com quem trabalhou. Quais eram suas missões? Alguma foi inapropriada ou passou dos limites?

## Faça sua voz ser ouvida

Pense além de ficar conhecido apenas em seu ambiente de trabalho. Veja você em um local mais alto, não se defina como programador de uma empresa específica. Empresas querem contratar especialistas, mas e se contratarem você porque já te conhecem, ou leram uma experiência sua?

Para começar a sair do "buraco" e ser ouvido pelo mundo comece pela web.

- Leia blogs
- Faça seu próprio blog
- Pratique a arte de escrever
- Escrevendo e tendo um crescimento online pode abrir oportunidades para outras formas de exposição
- Comece participando de pequenos eventos, e faça um trabalho bem feito caso vá palestrar. Lembre-se que é um treinamento
- Inicie agora mesmo! Você tem algo a ensinar. Nunca irá se sentir totalmente pronto, então talvez você deva começar agora.

**Exercicio**
1 - Se ainda não tem um blog, faça agora mesmo.
2 - Faça uma lista de possíveis tópicos para seu blogs
3 - Deixe a sua lista aberta e escreva um artigo para cada tópico que listar ali. Cada dia escolha um item e escreva.
4 - Não pense muito, apenas escreva e publique.

## Construa sua marca

Equilibre para seu nome ser reconhecido e ao mesmo tempo ter respeito.

Lembre-se que tudo que você faz e opina online fica guardado em algum local e poderá ser consultado, mantenha-se respeitável onde quer que seja.

**Exercicio**

Pesquise seu nome no Google entre aspas e veja o que aparece. É algo de qualidade? Está bem representado?

## Lance seu código

Imagine você trabalhar em algum local que já utiliza um código que você desenvolveu? Isso seria demais ne? É possível hoje em dia. Opensource.

Pessoas que escrevem open source são como você, sentados e programando em sua casa.

Contribuições open source demonstram paixão pelo sua vocação e uma contínua demonstração de habilidade. Reserve

Se criar algo realmente útil existe uma chance de você fica famoso, mesmo que seja em um nicho da comunidade. Ao fazer isso as pessoas o conhecerão e irão utilizar o que você faz, e isso é positivo para sua reputação.

**Exercicio**
Stuart Halloway (http://thinkrelevance.com)tem um workshop feito em congressos que chama de “Refactotum”. Se você tiver a chance de participar, eu realmente o recomendo, mas a essência é o seguinte: Pegue uma parte de um software open source com testes de unidade. Rode os testes por um analisador de cobertura de código. Encontre a parte menos testada do sistema e escreva testes para melhorar a cobertura daquele código. Códigos não testados geralmente são códigos não testáveis. Refatore para torná-lo mais testável. Envie um patch com a sua alteração.

O legal é que isso é mensurável e pode ser feito rapidamente. Não há desculpas para não tentar.

## Seja Marcante

As pessoas são mais propensas a escutar a dica de um amigo do que em um anúncio.

A única maneira de se destacar em uma multidão, na verdade, é ser brilhante.

Marcante não é o mesmo que "bom". Ser marcante significa que algo merece sua atenção. Para ser marcante, você deve ser significativamente diferente daqueles ao seu redor.

Você precisa de notoriedade para ser visto.

> Faça demonstrações de seu conhecimento ou morra

Apenas ser não é o suficiente, você precisa ser e fazer. Ser o melhor e mostrar fazendo que é o melhor.

Em vez de ser apenas respeitado pelos seus colegas de trabalho torne-se autoridade mais conhecida da sua cidade na tecnologia que você foca.

Não seja apenas o melhor do grupo. Seja o cara e faça as coisas sobre as quais as pessoas não podem deixar de falar.

1- Comece pequeno, mas tente fazer algo de marcante em seu atual projeto ou trabalho. Uma das maneiras é tentar alcançar uma produtividade marcante. Veja se as pessoas notam, se não, porque? Se sim, de que forma? Ajuste e tente denovo.

## Fazendo o gancho

Seja corajoso e converse com as pessoas referência de seu ramo, não tenha medo de estar "incomodando", por mais que alguem seja um grande especialista ou mestre no assunto, com certeza gostará de falar sobre o que faz e responder dúvidas.

> O medo nos separa dos profissionais

A barreira mais séria entre nós "mortais" e as pessoas que admiramos é o medo.

Algumas das mentes mais influentes do mundo do software estão acessíveis por e-mail ou até mesmo chat em tempo real, perca seu medo e seja humilde para conversar caso veja uma oportunidade.

**Exercicio**
1 - Escolha um de seus softwares favoritos e mande um e-mail para o criador, agradecendo, dando alguma dica, tente criar algum vínculo.
2 - Pense onde você pode encontrar uma pessoa que você admira e gostaria de aprender algo. Dê um jeito de começar uma conversa, mesmo se isso te deixar desconfortável.

## Já obsoleto

> Suas brilhantes novas habilidades já são obsoletas

Quanto mais bem sucedido for seu negócio, é mais provável que você fique confortável com seu modelo de negócio, tornando-se incrivelmente vulnerável para aqueles que vêm atrás de você com uma nova ideia radical, mesmo que seja estúpida.

Cuidado com o sucesso que gera arrogância e cega você gerando uma complacência. Todas as ondas se dissipam ou encontram a costa eventualemente.

Se timing é tudo, comece a pensar a frente com seus estudos. Se você perdeu a última onda, prepare-se para a próxima. Se

O que vai ser possivel em dois anos que ainda não é agora? O que não precisariamos nos preocupar em otimizar?

Olhar adiante e ser explicito sobre o desenvolvimento de suas habilidades pode fazer a diferença entre ser cego ou visionário.

**Exercicio**
1 - Separe um momento para investigar novas tecnologias, encontre pelo menos 2 horas por semana para pesquisar novas tecnologias e desenvolver suas habilidades nelas. Ponha a mão na massa, mesmo que seja com aplicações simples. Faça protótipos. Coloque em sua agenda.

## Você já perdeu seu emprego

O mercado muda constantemente, não se permita ficar muito confortável com sua posição atual. O mercado de tecnologia é um esfera em crescimento e mudança frequentes.

Não agarre-se a sua função

> Você não é seu emprego

Você deve mirar em um objetivo mas se ajustar conforme as coisas mudam, traçar um plano reto e cego é arriscado. O plano certo de carreira e degraus evolutivos pode não ser mais tão "certo" assim. Ajuste-se, seja flexível, por mais que tenha seus objetivos saiba moldá-los.

**Exercicio**
Se você é um programador, tente por um dia fazer o seus trabalho como se fosse um testador ou gerente de projetos, mude um pouco de posição para ver "como é". Faça uma lista e teste diferentes posições, talvez não mude seu dia a dia, mas mudará a sua visão de trabalho.
