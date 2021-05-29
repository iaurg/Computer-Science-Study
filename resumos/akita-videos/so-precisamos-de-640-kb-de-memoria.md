# Só Precisamos de 640 kB de Memória? | 16-bits até 64-bits!

[Video](https://www.youtube.com/watch?v=cTVXKfYOYxo)

Memórias sempre foram um assunto complicado e desde os primeiros chips os trabalhos são basicamente endereçar e encontrar as melhores formas de mapear esses endereços para aproveitar o máximo do programa.

Antigamente como os endereços eram fixos e acessíveis era muito fácil haver conflitos de endereços entre programas, principalmente pela limitação de memória e por falhas de gerenciador, pois haviam muitas adaptações de mappers.

Técnicas de mapper sempre foram utilizadas para conseguir ter "mais" memória do que realmente existia, algo como uma memória virtual.

Com essa necessidade de organização de memória naturalmente surgiram os gerenciadores de memória que eram programas embutidos no sistema operacional que gerenciavam os endereços para evitar conflitos de memória. O seu programa solicitava um espaço de memoria e o gerenciador providenciava para voce um espaço adequado, evitando conflito entre programas, desta forma abrir vários programas ao mesmo tempo começou a se tornar algo real.

Desde os 16bits nunca se foi utilizada toda a memória disponivel, pois era necessário que os chips dos processadores tivessem a capacidade de endereçar as memórias, e também existe o fato de que o sistema operacional sempre vai reservar uma espaço X de memória para ele gerenciar suas próprias tarefas e programas, então os programas que eram executados em um SO tinham um limite de memória acessivel que nunca era o limite da memória total.

Hoje em dia existem gerenciadores de memória que endereçam os programas em posições estratégicas e aleatórias para evitar conflitos e amenizar vírus que se aproveitam de posições fixas em memória. Por mais que tenhamosa tecnologia de 64bits os processadores atuais usam apenas 40bits que já é um número alto em relação a tecnologia de processadores atuais, endereçar uma memoria de 64bits exigiria uma quantidade de espaço em memoria absurda para os dias atuais.

Estudar:
- offset de memória